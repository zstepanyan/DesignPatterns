#ifndef ORG_COMPONENT_HPP
#define ORG_COMPONENT_HPP

#include <string>

class OrgComponent {
public:
    virtual ~OrgComponent() = default;
    virtual void displayInfo(int indent = 0) const = 0;
    virtual double getSalaryBudget() const = 0;
    virtual void add(OrgComponent* component) {}
    virtual void remove(OrgComponent* component) {}
};

#endif // ORG_COMPONENT_HPP
