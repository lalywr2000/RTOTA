#!/bin/bash

cd SampleProcess_0
git clone -b SampleProcess https://github.com/lalywr2000/RTOTA.git

cd RTOTA
cd SampleProcess
cd src

for file in *.cpp; do
    if [ -f "$file" ]; then
        sed -i 's/SampleProcess_/SampleProcess_0/g' "$file"
    fi
done

for file in *.hpp; do
    if [ -f "$file" ]; then
        sed -i 's/SampleProcess_/SampleProcess_0/g' "$file"
    fi
done

cd ..
mkdir build
cd build
cmake -DPROCESS_NUMBER="0" ..
make
./SampleProcess_0

