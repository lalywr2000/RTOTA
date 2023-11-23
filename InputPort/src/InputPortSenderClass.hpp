#ifndef INPUTPORTSENDERCLASS_HPP
#define INPUTPORTSENDERCLASS_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/SampleProcess0Proxy.hpp>
#include <v1/commonapi/SampleProcess1Proxy.hpp>

using namespace v1_0::commonapi;

class InputPortSenderClass
{
public:
    InputPortSenderClass();
    ~InputPortSenderClass();

    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<SampleProcess0Proxy<>> SampleProcess0TargetProxy;
    std::shared_ptr<SampleProcess1Proxy<>> SampleProcess1TargetProxy;

    CommonAPI::CallStatus callStatus;
    std::string returnMessage;
};

#endif
