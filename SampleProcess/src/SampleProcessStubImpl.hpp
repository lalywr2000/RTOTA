#ifndef SAMPLEPROCESSSTUBIMPL_HPP
#define SAMPLEPROCESSSTUBIMPL_HPP

#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/SampleProcess_StubDefault.hpp>
#include "SampleProcessSenderClass.hpp"
#include "PkillData.hpp"

class SampleProcessStubImpl : public v1_0::commonapi::SampleProcess_StubDefault {
private:
    SampleProcessSenderClass sender;
    
    std::string process_number;
    
public:
    SampleProcessStubImpl();
    virtual ~SampleProcessStubImpl();

    virtual void setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return);
};

#endif

