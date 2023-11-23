#!/bin/bash

~/generator/core-generator/commonapi-core-generator-linux-x86_64 -sk SampleProcess.fidl -d ../src-gen
~/generator/someip-generator/commonapi-someip-generator-linux-x86_64 SampleProcess.fdepl -d ../src-gen

