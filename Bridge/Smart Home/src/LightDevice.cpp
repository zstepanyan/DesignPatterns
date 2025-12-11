#include "LightDevice.h"
#include <iostream>

LightDevice::LightDevice(DeviceControl* ctrl) : Device(ctrl) {}

void LightDevice::turnOn() {
    std::cout << "Turning on the light." << std::endl;
    control->sendSignal("Turn on");
}

void LightDevice::turnOff() {
    std::cout << "Turning off the light." << std::endl;
    control->sendSignal("Turn off");
}

void LightDevice::interact() {
    std::cout << "Interacting with the light." << std::endl;
}
