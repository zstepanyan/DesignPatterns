#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "OrgComponent.hpp"
#include <string>

class Employee : public OrgComponent {
private:
    std::string name;
    std::string position;
    double salary;

public:
    Employee(const std::string& name, const std::string& position, double salary);
    ~Employee();

    void displayInfo(int indent = 0) const override;
    double getSalaryBudget() const override;
};

#endif // EMPLOYEE_HPP
