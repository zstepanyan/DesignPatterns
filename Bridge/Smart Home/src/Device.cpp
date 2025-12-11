#include "Device.h"

Device::Device(DeviceControl* ctrl) : control(ctrl) {}

Device::~Device() {}

void Device::setControl(DeviceControl* ctrl) {
    control = ctrl;
}
