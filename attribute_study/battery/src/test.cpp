#include "BatteryStatusStubImpl.hpp"
#include <CommonAPI/CommonAPI.hpp>
#include <algorithm>
#include <iostream>
#include <unistd.h>


using namespace v1::commonapi;

int main() {
    std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();
    std::shared_ptr<BatteryStatusStubImpl> batteryService = std::make_shared<BatteryStatusStubImpl>();
    
    while (!runtime->registerService("local", "BatteryStatus", batteryService, "Battery_Service"))
    {
        usleep(100000);
    }
    
    int cnt = 1;
    
    while (1) {
        batteryService->setBatteryAttribute(cnt);
        cnt ++;
        usleep(10000);
    }
    
    return 0;
}

