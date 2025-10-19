#include "Employee.hpp"
#include "Department.hpp"
#include <iostream>

int main() {
    Department* company = new Department("Tech Corp");
    Employee* ceo = new Employee("Alice Johnson", "CEO", 250000);
    Employee* cto = new Employee("Bob Smith", "CTO", 200000);
    Employee* dev1 = new Employee("Charlie Davis", "Developer", 90000);
    Employee* dev2 = new Employee("Dana Lee", "Developer", 95000);
    Employee* hrHead = new Employee("Eve Carter", "HR Head", 85000);
    Employee* hrAssistant = new Employee("Frank Brown", "HR Assistant", 45000);
    Department* devDept = new Department("Development Department");
    Department* hrDept = new Department("Human Resources");
    devDept->add(dev1);
    devDept->add(dev2);
    devDept->add(cto);
    hrDept->add(hrHead);
    hrDept->add(hrAssistant);
    company->add(ceo);
    company->add(devDept);
    company->add(hrDept);
    std::cout << "Company Organizational Chart:\n";
    company->displayInfo();
    std::cout << "\nTotal salary budget: $" << company->getSalaryBudget() << std::endl;

    delete company;
    return 0;
}
