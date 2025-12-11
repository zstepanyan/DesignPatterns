#include "EmployeeRequest.h"

EmployeeRequest::EmployeeRequest(const std::string& name, const std::string& detail, double amt)
    : employeeName(name), details(detail), amount(amt) {}

std::string EmployeeRequest::getDetails() const {
    return details;
}

double EmployeeRequest::getAmount() const {
    return amount;
}

std::string EmployeeRequest::getEmployeeName() const {
    return employeeName;
}
