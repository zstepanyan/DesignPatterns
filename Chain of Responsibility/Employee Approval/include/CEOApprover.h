#ifndef CEOAPPROVER_H
#define CEOAPPROVER_H

#include "IApprover.h"
#include "EmployeeRequest.h"
#include <iostream>

class CEOApprover : public IApprover {
public:
    void approveRequest(IRequest* request) override;
};

#endif // CEOAPPROVER_H
