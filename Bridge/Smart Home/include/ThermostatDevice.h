#ifndef THERMOSTATDEVICE_H
#define THERMOSTATDEVICE_H

#include "Device.h"

class ThermostatDevice : public Device {
public:
    explicit ThermostatDevice(DeviceControl* ctrl);

    void turnOn() override;
    void turnOff() override;
    void interact() override;
};

#endif // THERMOSTATDEVICE_H
