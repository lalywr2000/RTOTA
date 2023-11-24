#include "InputPortSenderClass.hpp"

using namespace v1_0::commonapi;

InputPortSenderClass::InputPortSenderClass()
{
    runtime = CommonAPI::Runtime::get();
    SampleProcess_0TargetProxy = runtime->buildProxy<SampleProcess_0Proxy>("local", "SampleProcess_0");
    SampleProcess_1TargetProxy = runtime->buildProxy<SampleProcess_1Proxy>("local", "SampleProcess_1");
}
 
InputPortSenderClass::~InputPortSenderClass() { }

