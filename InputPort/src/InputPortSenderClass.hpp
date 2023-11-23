#ifndef INPUTPORTSENDERCLASS_HPP
#define INPUTPORTSENDERCLASS_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/SampleProcessProxy.hpp>

using namespace v1_0::commonapi;

class InputPortSenderClass
{
public:
    InputPortSenderClass();
    ~InputPortSenderClass();

    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<SampleProcessProxy<>> SampleProcessTargetProxy;

    CommonAPI::CallStatus callStatus;
    std::string returnMessage;
};

#endif
