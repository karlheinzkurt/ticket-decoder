# syntax=docker/dockerfile:1

FROM ubuntu:22.04

ARG TARGETARCH
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get -y upgrade && apt-get clean
RUN apt-get install --no-install-recommends -y build-essential cmake python-is-python3 python3-pip python3-dev

RUN pip install conan==1.64.0 numpy
RUN conan profile new ticket-decoder --force --detect
RUN conan profile update settings.compiler.libcxx=libstdc++11 ticket-decoder

RUN mkdir -p /ticket-decoder/build/Release
WORKDIR /ticket-decoder
COPY conanfile.py .
RUN conan install . \
    -if build/Release \
    -pr ticket-decoder \
    -pr:b ticket-decoder \
    -s build_type=Release \
    --build missing \
    -o:h with_analyzer=False 

COPY <<EOF /ticket-decoder/build.sh
    #!/bin/bash
    cmake -S . -B build/Release/ -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
    cmake --build build/Release/ --config Release -t ticket_decoder -- $@
EOF
RUN chmod 755 build.sh

ENV PYTHONPATH=/ticket-decoder/build/Release/bin
