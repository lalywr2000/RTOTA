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
    int temp1 = std::stoi(_input.substr(0, 1));
    
    if (!priority_changed && (temp1 != priority))
    {
    	_return("pkill");
    	
    	return;
    }
    
    if (priority_changed)
    {
        if (temp1 != priority)
        {
            int temp2 = std::stoi(_input.substr(1));
            
    	    std::cout << "output = " << temp2 << std::endl;
    	    
    	    call_cnt ++;
    	    
    	    if (call_cnt > 3)
    	    {
    	        priority_changed = false;
    	        call_cnt = 0;
    	    }
    	    
    	    _return(std::to_string(temp2));
        }
    }
    else
    {
        if (temp1 == priority)
        {
            int temp2 = std::stoi(_input.substr(1));
            
    	    std::cout << "output = " << temp2 << std::endl;
    	    
    	    _return(std::to_string(temp2));
        }
    }

    return;
}

void OutputPortStubImpl::setPriority(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _input, setPriorityReply_t _return)
{
    int temp = _input.back() - 48;

    if (temp != priority)
    {
        priority = temp;
        priority_changed = true;
    }
    
    _return("");

    return;
}
