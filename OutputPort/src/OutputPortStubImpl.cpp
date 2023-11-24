#include "OutputPortStubImpl.hpp"

OutputPortStubImpl::OutputPortStubImpl()
{
    priority = -1;
    priority_changed = false;
    
    call_cnt = 0;
}

OutputPortStubImpl::~OutputPortStubImpl() { }

void OutputPortStubImpl::setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return)
{
    std::cout << (int)_input << std::endl;

    _return(std::to_string(_input));

    return;
}

void OutputPortStubImpl::setPriority(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _process_number, setPriorityReply_t _return)
{
    priority = _process_number.back() - 48;
    priority_changed = true;
    
    _return("*** priority set to " + _process_number + " ***");

    return;
}

