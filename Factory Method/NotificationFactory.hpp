#ifndef NOTIFICATION_FACTORY_HPP
#define NOTIFICATION_FACTORY_HPP

#include "Notification.hpp"

class NotificationFactory {
public:
    virtual Notification* createNotification() = 0;
    virtual ~NotificationFactory() = default;
};

#endif
