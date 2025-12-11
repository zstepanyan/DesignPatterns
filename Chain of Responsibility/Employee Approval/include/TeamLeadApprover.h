#ifndef TEAMLEADAPPROVER_H
#define TEAMLEADAPPROVER_H

#include "IApprover.h"
#include "EmployeeRequest.h"
#include <iostream>

class TeamLeadApprover : public IApprover {
public:
    void approveRequest(IRequest* request) override;
};

#endif // TEAMLEADAPPROVER_H
