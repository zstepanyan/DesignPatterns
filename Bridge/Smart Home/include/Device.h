#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include "DeviceControl.h"

class Device {
public:
    explicit Device(DeviceControl* ctrl) : control(ctrl) {}
    virtual ~Device() = default;

    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void interact() = 0;

    void setControl(DeviceControl* ctrl) {
        control = ctrl;
    }

protected:
    DeviceControl* control; 
};

#endif // DEVICE_H
