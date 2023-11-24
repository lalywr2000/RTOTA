#include <iostream>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include "SampleProcessStubImpl.hpp"
#include "SampleProcessSenderClass.hpp"
#include "PkillData.hpp"

using namespace v1_0::commonapi;

int main()
{
    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<SampleProcessStubImpl> SampleProcessService;

    runtime = CommonAPI::Runtime::get();
    SampleProcessService = std::make_shared<SampleProcessStubImpl>();
    runtime->registerService("local", "SampleProcess_", SampleProcessService);
    
    usleep(1000000);
    
    SampleProcessSenderClass sender;
    sender.OutputPortTargetProxy->setPriority("SampleProcess_", sender.callStatus, sender.returnMessage);

    while (!pkill_data) { }
    
    usleep(1000000);

    return 0;
}
