#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void update(double currentBid) = 0; 
};

#endif // IOBSERVER_H
