#include "AuctionItem.h"
#include <iostream>
#include <algorithm>

AuctionItem::AuctionItem() : highestBid(0) {}

void AuctionItem::registerObserver(IObserver* observer) {
    observers.push_back(observer);
}

void AuctionItem::removeObserver(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void AuctionItem::notifyObservers() {
    for (auto observer : observers) {
        observer->update(highestBid);
    }
}

void AuctionItem::placeBid(double bidAmount) {
    if (bidAmount > highestBid) {
        highestBid = bidAmount;
        notifyObservers();
    } 
    else {
        std::cout << "Bid must be higher than the current highest bid!" << std::endl;
    }
}

double AuctionItem::getHighestBid() const {
    return highestBid;
}
