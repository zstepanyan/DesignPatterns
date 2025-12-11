#include <iostream>
#include "include/LightDevice.h"
#include "include/ThermostatDevice.h"
#include "include/CameraDevice.h"
#include "include/BluetoothControl.h"
#include "include/ZigbeeControl.h"
#include "include/WiFiControl.h"

int main() {
    DeviceControl* bluetooth = new BluetoothControl();
    DeviceControl* zigbee = new ZigbeeControl();
    DeviceControl* wifi = new WiFiControl();

    Device* light = new LightDevice(bluetooth);
    Device* thermostat = new ThermostatDevice(zigbee);
    Device* camera = new CameraDevice(wifi);

    std::cout << "Controlling Light Device:" << std::endl;
    light->turnOn();
    light->interact();
    light->turnOff();

    std::cout << "\nControlling Thermostat Device:" << std::endl;
    thermostat->turnOn();
    thermostat->interact();
    thermostat->turnOff();

    std::cout << "\nControlling Camera Device:" << std::endl;
    camera->turnOn();
    camera->interact();
    camera->turnOff();

    delete light;
    delete thermostat;
    delete camera;
    delete bluetooth;
    delete zigbee;
    delete wifi;

    return 0;
}
