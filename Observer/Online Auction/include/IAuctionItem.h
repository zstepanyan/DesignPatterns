#ifndef IAUCTIONITEM_H
#define IAUCTIONITEM_H

#include "IObserver.h"
#include <vector>

class IAuctionItem {
public:
    virtual ~IAuctionItem() = default;
    virtual void registerObserver(IObserver* observer) = 0;
    virtual void removeObserver(IObserver* observer) = 0;
    virtual void notifyObservers() = 0;
    virtual void placeBid(double bidAmount) = 0;
};

#endif // IAUCTIONITEM_H
