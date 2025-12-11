#include "AuctionSystem.h"

AuctionSystem::AuctionSystem(AuctionItem* item) : auctionItem(item) {}

void AuctionSystem::placeBid(double bidAmount) {
    auctionItem->placeBid(bidAmount);
}
