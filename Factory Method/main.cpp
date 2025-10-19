#include "EmailFactory.hpp"
#include "SMSFactory.hpp"
#include "PushFactory.hpp"
#include <memory>

void sendAlert(NotificationFactory* factory, const std::string& recipient, const std::string& message) {
    std::unique_ptr<Notification> notification(factory->createNotification());
    notification->send(recipient, message);
}

int main() {
    EmailFactory emailFactory;
    SMSFactory smsFactory;
    PushFactory pushFactory;

    sendAlert(&emailFactory, "alice@example.com", "Your order has shipped!");
    sendAlert(&smsFactory, "+1234567890", "Your OTP is 123456");
    sendAlert(&pushFactory, "user123", "New message received");

    return 0;
}
