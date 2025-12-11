#ifndef IAPPROVER_H
#define IAPPROVER_H

#include "IRequest.h"

class IApprover {
public:
    IApprover() : nextApprover(nullptr) {}
    virtual ~IApprover() = default;

    void setNextApprover(IApprover* approver) {
        nextApprover = approver;
    }

    virtual void approveRequest(IRequest* request) = 0;
    
protected:
    IApprover* nextApprover;
};

#endif // IAPPROVER_H
