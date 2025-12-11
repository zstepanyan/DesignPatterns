#ifndef WIFICONTROL_H
#define WIFICONTROL_H

#include "DeviceControl.h"

class WiFiControl : public DeviceControl {
public:
    void sendSignal(const std::string& command) override;
};

#endif // WIFICONTROL_H
