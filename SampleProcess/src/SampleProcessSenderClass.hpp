#ifndef SAMPLEPROCESSSENDERCLASS_HPP
#define SAMPLEPROCESSSENDERCLASS_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/OutputPortProxy.hpp>

using namespace v1_0::commonapi;

class SampleProcessSenderClass
{
public:
    SampleProcessSenderClass();
    ~SampleProcessSenderClass();

    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<OutputPortProxy<>> OutputPortTargetProxy;

    CommonAPI::CallStatus callStatus;
    std::string returnMessage;
};

#endif
