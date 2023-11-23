#include "SampleProcessSenderClass.hpp"

using namespace v1_0::commonapi;

SampleProcessSenderClass::SampleProcessSenderClass()
{
    runtime = CommonAPI::Runtime::get();
    OutputPortTargetProxy = runtime->buildProxy<OutputPortProxy>("local", "OutputPort");
}
 
SampleProcessSenderClass::~SampleProcessSenderClass() { }

