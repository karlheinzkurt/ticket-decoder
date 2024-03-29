# syntax=docker/dockerfile:1

FROM ubuntu:22.04

ARG TARGETARCH
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get -y upgrade && apt-get clean
RUN apt-get install --no-install-recommends -y cmake python-is-python3 python3-pip libgtk2.0-dev wget

# Keep all commands above equal in all build container docker files to make layers re-usable

RUN apt-get install --no-install-recommends -y build-essential

# Desired gcc11 is default in jammy, but when the desired compiler version changes, do something like the following to change
# RUN apt-get install --no-install-recommends -y gcc-10 g++-10 cpp-10 libstdc++-10-dev make

# RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-10 800
# RUN update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-10 800

RUN pip install conan==1.62.0
RUN conan profile new ticket-decoder --force --detect
RUN conan profile update settings.compiler.libcxx=libstdc++11 ticket-decoder
RUN conan profile update conf.tools.system.package_manager:mode=install ticket-decoder

RUN mkdir -p /ticket-decoder/build/Release
WORKDIR /ticket-decoder
RUN mkdir -p cert && wget 'https://railpublickey.uic.org/download.php' -O cert/UIC_PublicKeys.xml
COPY conanfile.py .
RUN conan install . \
    -if build/Release \
    -pr ticket-decoder \
    -pr:b ticket-decoder \
    -s build_type=Release \
    --build missing

COPY <<EOF /ticket-decoder/build.sh
    #!/bin/bash
    # cmake 3.22 is not supporting presets, so we have to use toolchain file: https://docs.conan.io/2.0/examples/tools/cmake/cmake_toolchain/build_project_cmake_presets.html#building-the-project-using-cmakepresets
    cmake -S . -B build/Release/ -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
    cmake --build build/Release/ --config Release -- $@
EOF

RUN chmod 755 build.sh
