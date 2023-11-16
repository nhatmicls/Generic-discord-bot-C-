FROM ubuntu:20.04 as main

WORKDIR /bot

RUN apt-get update -y && apt-get upgrade -y
RUN apt-get install wget

#Install mongo-c-driver

#Install mongo-cxx-driver
RUN export VERSION=1.25.0
RUN wget "https://github.com/mongodb/mongo-c-driver/archive/refs/tags/$VERSION.tar.gz" \
    --output-document="mongo-c-driver-$VERSION.tar.gz"
RUN cd ~/mongo-cxx-driver-r3.8.1/build
RUN cmake .. -DCMAKE_BUILD_TYPE=Release -DMONGOCXX_OVERRIDE_DEFAULT_INSTALL_PREFIX=OFF -DCMAKE_PREFIX_PATH=/opt/mongo-c-driver
RUN cmake --build . --target install