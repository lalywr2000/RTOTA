#!/bin/bash

git clone -b SampleProcess https://github.com/lalywr2000/RTOTA.git
cd RTOTA
cd SampleProcess
mkdir build
cd build
cmake ..
make
./SampleProcess

