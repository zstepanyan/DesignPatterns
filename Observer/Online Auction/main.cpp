#include <iostream>
#include "include/AuctionItem.h"
#include "include/Bidder.h"
#include "include/AuctionSystem.h"

int main() {
    AuctionItem* auctionItem = new AuctionItem();

    Bidder* bidder1 = new Bidder("Alice");
    Bidder* bidder2 = new Bidder("Bob");
    Bidder* bidder3 = new Bidder("Charlie");

    auctionItem->registerObserver(bidder1);
    auctionItem->registerObserver(bidder2);
    auctionItem->registerObserver(bidder3);

    AuctionSystem* auctionSystem = new AuctionSystem(auctionItem);

    auctionSystem->placeBid(100.0);
    auctionSystem->placeBid(200.0);
    auctionSystem->placeBid(150.0); 

    delete bidder1;
    delete bidder2;
    delete bidder3;
    delete auctionItem;
    delete auctionSystem;

    return 0;
}
