#ifndef LIGHTDEVICE_H
#define LIGHTDEVICE_H

#include "Device.h"

class LightDevice : public Device {
public:
    explicit LightDevice(DeviceControl* ctrl);

    void turnOn() override;
    void turnOff() override;
    void interact() override;
};

#endif // LIGHTDEVICE_H
