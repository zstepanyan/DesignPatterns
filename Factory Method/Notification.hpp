#ifndef NOTIFICATION_HPP
#define NOTIFICATION_HPP

#include <string>

class Notification {
public:
    virtual void send(const std::string& recipient, const std::string& message) = 0;
    virtual ~Notification() = default;
};

#endif
