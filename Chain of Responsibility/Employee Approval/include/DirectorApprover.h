#ifndef DIRECTORAPPROVER_H
#define DIRECTORAPPROVER_H

#include "IApprover.h"
#include "EmployeeRequest.h"
#include <iostream>

class DirectorApprover : public IApprover {
public:
    void approveRequest(IRequest* request) override;
};

#endif // DIRECTORAPPROVER_H
