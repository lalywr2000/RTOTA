cmake_minimum_required(VERSION 3.15)
project(InputPort)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x")


include_directories(
    ~/build-commonapi/capicxx-core-runtime/include
    ~/build-commonapi/capicxx-someip-runtime/include
    ~/build-commonapi/vsomeip/interface
)
link_directories(
    ~/build-commonapi/capicxx-core-runtime/build
    ~/build-commonapi/capicxx-someip-runtime/build
    ~/build-commonapi/vsomeip/build
)
include_directories(
    src-gen
)


add_executable(InputPort
        src/InputPort.cpp
        src/InputPortSenderClass.cpp
        src-gen/v1/commonapi/SampleProcessSomeIPProxy.cpp
        src-gen/v1/commonapi/SampleProcessSomeIPDeployment.cpp
)
target_link_libraries(InputPort CommonAPI CommonAPI-SomeIP vsomeip3)
