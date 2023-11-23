#include "InputPortSenderClass.hpp"

using namespace v1_0::commonapi;

InputPortSenderClass::InputPortSenderClass()
{
    runtime = CommonAPI::Runtime::get();
    SampleProcess0TargetProxy = runtime->buildProxy<SampleProcess0Proxy>("local", "SampleProcess0");
    SampleProcess1TargetProxy = runtime->buildProxy<SampleProcess1Proxy>("local", "SampleProcess1");
}
 
InputPortSenderClass::~InputPortSenderClass() { }

