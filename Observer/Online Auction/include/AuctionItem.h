#ifndef AUCTIONITEM_H
#define AUCTIONITEM_H

#include "IAuctionItem.h"

class AuctionItem : public IAuctionItem {
public:
    AuctionItem();
    void registerObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;
    void notifyObservers() override;
    void placeBid(double bidAmount) override;
    double getHighestBid() const;

private:
    std::vector<IObserver*> observers;
    double highestBid;
};

#endif // AUCTIONITEM_H
