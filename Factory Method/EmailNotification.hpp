#ifndef EMAIL_NOTIFICATION_HPP
#define EMAIL_NOTIFICATION_HPP

#include "Notification.hpp"
#include <iostream>

class EmailNotification : public Notification {
public:
    void send(const std::string& recipient, const std::string& message) override {
        std::cout << "[Email] To: " << recipient << ", Message: " << message << std::endl;
    }
};

#endif
