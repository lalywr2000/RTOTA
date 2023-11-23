#!/bin/bash

git clone -b SampleProcess https://github.com/lalywr2000/RTOTA.git

cd RTOTA
cd SampleProcess
cd src

for file in ./*.txt; do
    if [ -f "$file" ]; then
        sed -i 's/SampleProcess/SampleProcess0/g' "$file"
    fi
done

cd ..
mkdir build
cd build
cmake ..
make
./SampleProcess

