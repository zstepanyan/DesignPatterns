#include "CameraDevice.h"
#include <iostream>

CameraDevice::CameraDevice(DeviceControl* ctrl) : Device(ctrl) {}

void CameraDevice::turnOn() {
    std::cout << "Turning on the camera." << std::endl;
    control->sendSignal("Turn on");
}

void CameraDevice::turnOff() {
    std::cout << "Turning off the camera." << std::endl;
    control->sendSignal("Turn off");
}

void CameraDevice::interact() {
    std::cout << "Starting camera video feed." << std::endl;
}
