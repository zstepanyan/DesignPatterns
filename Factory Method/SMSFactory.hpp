#ifndef SMS_FACTORY_HPP
#define SMS_FACTORY_HPP

#include "NotificationFactory.hpp"
#include "SMSNotification.hpp"

class SMSFactory : public NotificationFactory {
public:
    Notification* createNotification() override {
        return new SMSNotification();
    }
};

#endif
