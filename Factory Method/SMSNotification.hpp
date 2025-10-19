#ifndef SMS_NOTIFICATION_HPP
#define SMS_NOTIFICATION_HPP

#include "Notification.hpp"
#include <iostream>

class SMSNotification : public Notification {
public:
    void send(const std::string& recipient, const std::string& message) override {
        std::cout << "[SMS] To: " << recipient << ", Message: " << message << std::endl;
    }
};

#endif
