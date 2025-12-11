#ifndef EMPLOYEEREQUEST_H
#define EMPLOYEEREQUEST_H

#include "IRequest.h"

class EmployeeRequest : public IRequest {
public:
    EmployeeRequest(const std::string& name, const std::string& detail, double amt);
    
    std::string getDetails() const override;
    double getAmount() const override;
    std::string getEmployeeName() const override;

private:
    std::string employeeName;
    std::string details;
    double amount;
};

#endif // EMPLOYEEREQUEST_H
