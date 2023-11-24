#include "OutputPortStubImpl.hpp"

OutputPortStubImpl::OutputPortStubImpl()
{
    priority = -1;
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
    
    _return("*** priority set to " + _process_number + " ***");

    return;
}


/*
#include <iostream>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include "InputPortSenderClass.hpp"

using namespace v1_0::commonapi;

int main()
{
    InputPortSenderClass sender;
    
    bool sample_process_0 = false;
    bool sample_process_1 = false;
    int priority = -1;  // Number of the last process to become available 
    
    while (1)
    {
        if (sender.SampleProcess_0TargetProxy->isAvailable())
        {
            sample_process_0 = true;
            priority = 0;
            break;
        }
        if (sender.SampleProcess_1TargetProxy->isAvailable())
        {
            sample_process_1 = true;
            priority = 1;
            break;
        }
        
        usleep(100000);
    }
    
    int value = 0;

    while (1)
    {
        sample_process_0 = sender.SampleProcess_0TargetProxy->isAvailable()
        sample_process_1 = sender.SampleProcess_1TargetProxy->isAvailable() 
    
    
    
        if (process_number == 0)
        {
            sender.SampleProcess_0TargetProxy->setInput(value, sender.callStatus, sender.returnMessage);
            
	    value ++;
	    if (value == 10)
	    {
	        value = 0;
	    }
            
            if (sender.returnMessage != "")
            {
                std::cout << "input = " << value << '\t' << "output = " << sender.returnMessage << '\t' << "(via 0)" << std::endl;
            }
            else
            {
                std::cout << "input = " << value << '\t' << "output failed!" << std::endl;
            }
            
            if (sender.SampleProcess_1TargetProxy->isAvailable())
            {
                process_number = 1;
                break;
            }
            
            usleep(1000000);
        }
    
    
    
    
    
    
    
    
        
        if (sender.SampleProcess_0TargetProxy->isAvailable())
        {
            process_number = 0;
            break;
        }
        if (sender.SampleProcess_1TargetProxy->isAvailable())
        {
            process_number = 1;
            break;
        }
        
    
    
    
    
    
    
    
    

        
        
    }

    return 0;
} */

