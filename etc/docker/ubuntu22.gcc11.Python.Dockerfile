# syntax=docker/dockerfile:1

FROM ubuntu:22.04

ARG TARGETARCH
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y --no-install-recommends make cmake wget python-is-python3 python3-pip python3-dev
# Keep all commands above equal in all build container docker files to make layers re-usable
RUN apt-get install -y --no-install-recommends gcc-11 g++-11 cpp-11 libstdc++-11-dev
RUN apt-get clean

RUN update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 800
RUN update-alternatives --install /usr/bin/c++ c++ /usr/bin/g++-11 800
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 800
RUN update-alternatives --install /usr/bin/cc  cc  /usr/bin/gcc-11 800

WORKDIR /ticket-decoder
COPY etc/conan-config.sh etc/conan-install.sh etc/cmake-config.sh etc/cmake-build.sh etc/python-test.sh etc/install-uic-keys.sh etc/

RUN pip install conan==1.64.0 numpy
RUN etc/conan-config.sh gcc 11

COPY conanfile.py .
RUN etc/conan-install.sh Release -o:h with_analyzer=False
COPY <<EOF /ticket-decoder/build.sh
    #!/usr/bin/env bash

    set -o errexit

    ./etc/cmake-config.sh Release
    ./etc/cmake-build.sh Release -t ticket_decoder \$\@
EOF
RUN chmod 755 build.sh

ENV PYTHONPATH=/ticket-decoder/build/Release/bin
