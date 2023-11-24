cmake_minimum_required(VERSION 3.15)
project(SampleProcess)

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


set(PROCESS_NUMBER "-")

add_executable(SampleProcess_${PROCESS_NUMBER}
        src/SampleProcess.cpp
        src/SampleProcessStubImpl.cpp
        src/SampleProcessSenderClass.cpp
        src-gen/v1/commonapi/OutputPortSomeIPProxy.cpp
        src-gen/v1/commonapi/OutputPortSomeIPDeployment.cpp
        src-gen/v1/commonapi/SampleProcess_${PROCESS_NUMBER}SomeIPStubAdapter.cpp
        src-gen/v1/commonapi/SampleProcess_${PROCESS_NUMBER}SomeIPDeployment.cpp
)
target_link_libraries(SampleProcess_${PROCESS_NUMBER} CommonAPI CommonAPI-SomeIP vsomeip3)
