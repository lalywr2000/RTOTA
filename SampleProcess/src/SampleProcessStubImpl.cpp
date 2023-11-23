#include "SampleProcessStubImpl.hpp"

SampleProcessStubImpl::SampleProcessStubImpl() { }
SampleProcessStubImpl::~SampleProcessStubImpl() { }

void SampleProcessStubImpl::setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return)
{
    sender.OutputPortTargetProxy->setInput(_input * 2, sender.callStatus, sender.returnMessage);

    _return(sender.returnMessage);

    return;
}

