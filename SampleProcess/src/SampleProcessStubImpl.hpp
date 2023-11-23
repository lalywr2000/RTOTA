#ifndef SAMPLEPROCESSSTUBIMPL_HPP
#define SAMPLEPROCESSSTUBIMPL_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/SampleProcessStubDefault.hpp>
#include "SampleProcessSenderClass.hpp"

class SampleProcessStubImpl : public v1_0::commonapi::SampleProcessStubDefault {
private:
    SampleProcessSenderClass sender;
    
public:
    SampleProcessStubImpl();
    virtual ~SampleProcessStubImpl();

    virtual void setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return);
};

#endif

