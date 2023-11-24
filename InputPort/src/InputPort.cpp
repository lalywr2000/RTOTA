#include <iostream>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include "InputPortSenderClass.hpp"

using namespace v1_0::commonapi;

int main()
{
    InputPortSenderClass sender;
    
    int value = 0;

    while (1)
    {
        if (sender.SampleProcess_0TargetProxy->isAvailable())
        {
            sender.SampleProcess_0TargetProxy->setInput(value, sender.callStatus, sender.returnMessage);
            
            if (sender.returnMessage != "")
            {
                std::cout << "input value = " << value << '\t' << "output value = " << sender.returnMessage << std::endl;
            }
            else
            {
                std::cout << "input value = " << value << '\t' << "output failed!" << std::endl;
            }
            
            usleep(1000000);
        }
        else
        {
            std::cout << "input value = " << value << '\t' << "output failed!" << std::endl;
            usleep(1000000);
        }
        
        value ++;
        if (value == 10)
        {
            value = 0;
        }
    }

    return 0;
}

