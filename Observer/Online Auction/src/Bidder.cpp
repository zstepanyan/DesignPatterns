#include "Bidder.h"
#include <iostream>

Bidder::Bidder(const std::string& bidderName) : name(bidderName) {}

void Bidder::update(double currentBid) {
    std::cout << name << " has been notified. Current highest bid is: $" << currentBid << std::endl;
}

std::string Bidder::getName() const {
    return name;
}
