#ifndef BIDDER_H
#define BIDDER_H

#include "IObserver.h"
#include <string>

class Bidder : public IObserver {
public:
    Bidder(const std::string& bidderName);
    void update(double currentBid) override;
    std::string getName() const;

private:
    std::string name;
};

#endif // BIDDER_H
