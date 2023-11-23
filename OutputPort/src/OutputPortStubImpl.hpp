#ifndef OUTPUTPORTSTUBIMPL_HPP
#define OUTPUTPORTSTUBIMPL_HPP

#include <iostream>
#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/OutputPortStubDefault.hpp>

class OutputPortStubImpl : public v1_0::commonapi::OutputPortStubDefault {
public:
    OutputPortStubImpl();
    virtual ~OutputPortStubImpl();

    virtual void setInput(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _input, setInputReply_t _return);
};

#endif

