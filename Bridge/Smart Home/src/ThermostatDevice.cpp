#include "ThermostatDevice.h"
#include <iostream>

ThermostatDevice::ThermostatDevice(DeviceControl* ctrl) : Device(ctrl) {}

void ThermostatDevice::turnOn() {
    std::cout << "Turning on the thermostat." << std::endl;
    control->sendSignal("Turn on");
}

void ThermostatDevice::turnOff() {
    std::cout << "Turning off the thermostat." << std::endl;
    control->sendSignal("Turn off");
}

void ThermostatDevice::interact() {
    std::cout << "Adjusting thermostat temperature." << std::endl;
}
