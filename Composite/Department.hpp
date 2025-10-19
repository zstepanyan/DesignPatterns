#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include "OrgComponent.hpp"
#include <vector>
#include <string>

class Department : public OrgComponent {
private:
    std::string name;
    std::vector<OrgComponent*> components;

public:
    Department(const std::string& name);
    ~Department();

    void displayInfo(int indent = 0) const override;
    double getSalaryBudget() const override;

    void add(OrgComponent* component) override;
    void remove(OrgComponent* component) override;
};

#endif // DEPARTMENT_HPP
