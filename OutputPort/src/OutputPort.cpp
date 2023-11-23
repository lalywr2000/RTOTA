#include <iostream>
#include <CommonAPI/CommonAPI.hpp>
#include "OutputPortStubImpl.hpp"

using namespace v1_0::commonapi;

int main()
{
    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<OutputPortStubImpl> OutputPortService;

    runtime = CommonAPI::Runtime::get();
    OutputPortService = std::make_shared<OutputPortStubImpl>();
    runtime->registerService("local", "OutputPort", OutputPortService);

    while (1) { }

    return 0;
}

