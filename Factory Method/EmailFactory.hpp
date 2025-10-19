#ifndef EMAIL_FACTORY_HPP
#define EMAIL_FACTORY_HPP

#include "NotificationFactory.hpp"
#include "EmailNotification.hpp"

class EmailFactory : public NotificationFactory {
public:
    Notification* createNotification() override {
        return new EmailNotification();
    }
};

#endif
