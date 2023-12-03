#include <iostream>
#include <string>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/BatteryStatusProxy.hpp>

using namespace v1_0::commonapi;


signals:
    void speedChanged(qint16 speed);
    void batteryChanged(quint8 battery);
    void brakeChanged(bool brake);
    void gearChanged(quint8 gear);

    void speedStatus(bool status);
    void batteryStatus(bool status);
    void inputStatus(bool status);
    void racerStatus(bool status);
    void gearStatus(bool status);
    
public slots:
    void checkAvailable();

private:
    std::shared_ptr < CommonAPI::Runtime > runtime;
    std::shared_ptr<SpeedStatusProxy<>> speedProxy;
    std::shared_ptr<BatteryStatusProxy<>> batteryProxy;
    std::shared_ptr<InputStatusProxy<>> inputProxy;
    std::shared_ptr<GearStatusProxy<>> gearProxy;
    std::shared_ptr<ToApplicationProxy<>> errorProxy;

    void speedProxyInit();
    void batteryProxyInit();
    void inputProxyInit();
    void gearProxyInit();
    void errorProxyInit();

    QTimer *errorProxyStatusTimer;
    bool errorProxyStatus;

    int speed;
    int battery;
    bool brake;
    int gear;
};
