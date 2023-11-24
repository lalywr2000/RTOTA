#ifndef INPUTPORTSENDERCLASS_HPP
#define INPUTPORTSENDERCLASS_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/SampleProcess_0Proxy.hpp>
#include <v1/commonapi/SampleProcess_1Proxy.hpp>

using namespace v1_0::commonapi;

class InputPortSenderClass
{
public:
    InputPortSenderClass();
    ~InputPortSenderClass();

    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<SampleProcess_0Proxy<>> SampleProcess_0TargetProxy;
    std::shared_ptr<SampleProcess_1Proxy<>> SampleProcess_1TargetProxy;

    CommonAPI::CallStatus callStatus;
    std::string returnMessage;
};

#endif
