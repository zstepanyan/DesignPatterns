#include "ZigbeeControl.h"
#include <iostream>

void ZigbeeControl::sendSignal(const std::string& command) {
    std::cout << "Sending Zigbee signal: " << command << std::endl;
}
