#ifndef DEVICECONTROL_H
#define DEVICECONTROL_H

#include <string>

class DeviceControl {
public:
    virtual ~DeviceControl() = default;
    virtual void sendSignal(const std::string& command) = 0;
};

#endif // DEVICECONTROL_H
