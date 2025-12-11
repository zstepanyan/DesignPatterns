#ifndef ZIGBEECONTROL_H
#define ZIGBEECONTROL_H

#include "DeviceControl.h"

class ZigbeeControl : public DeviceControl {
public:
    void sendSignal(const std::string& command) override;
};

#endif // ZIGBEECONTROL_H
