#ifndef CAMERAVIDEO_H
#define CAMERAVIDEO_H

#include "Device.h"

class CameraDevice : public Device {
public:
    explicit CameraDevice(DeviceControl* ctrl);

    void turnOn() override;
    void turnOff() override;
    void interact() override;
};

#endif // CAMERAVIDEO_H
