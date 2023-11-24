#include "SampleProcessStubImpl.hpp"

SampleProcessStubImpl::SampleProcessStubImpl() { }
SampleProcessStubImpl::~SampleProcessStubImpl() { }

void SampleProcessStubImpl::setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return)
{
    sender.OutputPortTargetProxy->setInput("SampleProcess_".back() + std::to_string(_input * 2), sender.callStatus, sender.returnMessage);
    
    if (sender.returnMessage != "")
    {
        if (sender.returnMessage == "pkill")
        {
            pkill_data = true;
            _return("");
            return;
        }
        
        _return(sender.returnMessage + "\t(via SampleProcess_)");
    }
    else
    {
        _return("");
    }
    
    return;
}

