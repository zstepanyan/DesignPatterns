#include "BluetoothControl.h"
#include <iostream>

void BluetoothControl::sendSignal(const std::string& command) {
    std::cout << "Sending Bluetooth signal: " << command << std::endl;
}
