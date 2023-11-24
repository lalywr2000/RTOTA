#include <CommonAPI/CommonAPI.hpp>
#include "SampleProcessStubImpl.hpp"

using namespace v1_0::commonapi;

int main()
{
    std::shared_ptr<CommonAPI::Runtime> runtime;
    std::shared_ptr<SampleProcessStubImpl> SampleProcessService;

    runtime = CommonAPI::Runtime::get();
    SampleProcessService = std::make_shared<SampleProcessStubImpl>();
    runtime->registerService("local", "SampleProcess_", SampleProcessService);

    while (1) { }

    return 0;
}

