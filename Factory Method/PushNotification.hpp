#ifndef PUSH_NOTIFICATION_HPP
#define PUSH_NOTIFICATION_HPP

#include "Notification.hpp"
#include <iostream>

class PushNotification : public Notification {
public:
    void send(const std::string& recipient, const std::string& message) override {
        std::cout << "[Push Notification] To: " << recipient << ", Message: " << message << std::endl;
    }
};

#endif
