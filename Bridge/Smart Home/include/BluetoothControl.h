#ifndef BLUETOOTHCONTROL_H
#define BLUETOOTHCONTROL_H

#include "DeviceControl.h"

class BluetoothControl : public DeviceControl {
public:
    void sendSignal(const std::string& command) override;
};

#endif // BLUETOOTHCONTROL_H
