#include "OutputPortStubImpl.hpp"

OutputPortStubImpl::OutputPortStubImpl()
{
    priority = -1;
    priority_changed = false;
    
    call_cnt = 0;
}

OutputPortStubImpl::~OutputPortStubImpl() { }

void OutputPortStubImpl::setInput(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _input, setInputReply_t _return)
{
    int temp = std::stoi(_input.substr(1));
    
    std::cout << temp << std::endl;

    _return(std::to_string(temp));

    return;
}

