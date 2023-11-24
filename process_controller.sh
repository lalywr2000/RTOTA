#!/bin/bash

cd SampleProcess_$1
git clone -b SampleProcess https://github.com/lalywr2000/RTOTA.git

cd RTOTA
cd SampleProcess
cd src

for file in *.cpp; do
    if [ -f "$file" ]; then
        sed -i "s/SampleProcess_/SampleProcess_$1/g" "$file"
    fi
done

for file in *.hpp; do
    if [ -f "$file" ]; then
        sed -i "s/SampleProcess_/SampleProcess_$1/g" "$file"
    fi
done

cd ..
mkdir build
cd build
cmake -DPROCESS_NUMBER="$1" ..
make
./SampleProcess_$1

