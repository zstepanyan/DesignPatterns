#ifndef AUCTIONSYSTEM_H
#define AUCTIONSYSTEM_H

#include "AuctionItem.h"

class AuctionSystem {
public:
    AuctionSystem(AuctionItem* item);
    void placeBid(double bidAmount);

private:
    AuctionItem* auctionItem;
};

#endif // AUCTIONSYSTEM_H
