#include "WiFiControl.h"
#include <iostream>

void WiFiControl::sendSignal(const std::string& command) {
    std::cout << "Sending WiFi signal: " << command << std::endl;
}
