#ifndef OUTPUTPORTSTUBIMPL_HPP
#define OUTPUTPORTSTUBIMPL_HPP

#include <iostream>
#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/OutputPortStubDefault.hpp>

class OutputPortStubImpl : public v1_0::commonapi::OutputPortStubDefault {
private:
    int priority;
    bool priority_changed;
    
    int call_cnt;

public:
    OutputPortStubImpl();
    virtual ~OutputPortStubImpl();

    virtual void setInput(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _input, setInputReply_t _return);
};

#endif

