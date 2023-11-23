#include "InputPortSenderClass.hpp"

using namespace v1_0::commonapi;

InputPortSenderClass::InputPortSenderClass()
{
    runtime = CommonAPI::Runtime::get();
    SampleProcessTargetProxy = runtime->buildProxy<SampleProcessProxy>("local", "SampleProcess");
}
 
InputPortSenderClass::~InputPortSenderClass() { }

