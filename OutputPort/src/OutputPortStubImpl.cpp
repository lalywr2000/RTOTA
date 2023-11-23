#include "OutputPortStubImpl.hpp"

OutputPortStubImpl::OutputPortStubImpl() { }
OutputPortStubImpl::~OutputPortStubImpl() { }

void OutputPortStubImpl::setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return)
{
    std::cout << (int)_input << std::endl;

    _return(std::to_string(_input));

    return;
}

