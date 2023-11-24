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
    
    int value = 0;

    while (1)
    {
        sample_process_0 = sender.SampleProcess_0TargetProxy->isAvailable();
        sample_process_1 = sender.SampleProcess_1TargetProxy->isAvailable();
        
        if (sample_process_0 || sample_process_1)
        {
            if (sample_process_0)
            {
                sender.SampleProcess_0TargetProxy->setInput(value, sender.callStatus, sender.returnMessage);
            
                if (sender.returnMessage != "")
                {
                    std::cout << "input = " << value << '\t' << "output = " << sender.returnMessage << std::endl;
                }
                else
                {
                    std::cout << "input = " << value << '\t' << "output failed!" << std::endl;
                }
            }
            if (sample_process_1)
            {
                sender.SampleProcess_1TargetProxy->setInput(value, sender.callStatus, sender.returnMessage);
            
                if (sender.returnMessage != "")
                {
                    std::cout << "input = " << value << '\t' << "output = " << sender.returnMessage << std::endl;
                }
                else
                {
                    std::cout << "input = " << value << '\t' << "output failed!" << std::endl;
                }
            }
        }
        else
        {
            std::cout << "input = " << value << '\t' << "output failed!" << std::endl;
        }
        
        value ++;
        if (value == 10)
        {
            value = 0;
        }
        
        usleep(1000000);
    }

    return 0;
}

