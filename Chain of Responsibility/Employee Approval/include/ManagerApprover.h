#ifndef MANAGERAPPROVER_H
#define MANAGERAPPROVER_H

#include "IApprover.h"
#include "EmployeeRequest.h"
#include <iostream>

class ManagerApprover : public IApprover {
public:
    void approveRequest(IRequest* request) override;
};

#endif // MANAGERAPPROVER_H
