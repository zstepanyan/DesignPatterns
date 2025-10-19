#ifndef PUSH_FACTORY_HPP
#define PUSH_FACTORY_HPP

#include "NotificationFactory.hpp"
#include "PushNotification.hpp"

class PushFactory : public NotificationFactory {
public:
    Notification* createNotification() override {
        return new PushNotification();
    }
};

#endif
