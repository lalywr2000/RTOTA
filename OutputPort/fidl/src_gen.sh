#!/bin/bash

~/generator/core-generator/commonapi-core-generator-linux-x86_64 -sk OutputPort.fidl -d ../src-gen
~/generator/someip-generator/commonapi-someip-generator-linux-x86_64 OutputPort.fdepl -d ../src-gen

