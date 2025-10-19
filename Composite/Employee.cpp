#include "Employee.hpp"
#include "Utils.hpp"
#include <iostream>

Employee::Employee(const std::string& name, const std::string& position, double salary)
    : name(name), position(position), salary(salary) {}

Employee::~Employee() {}

void Employee::displayInfo(int indent) const {
    std::cout << Utils::indentString(indent) 
              << "Employee: " << name 
              << ", Position: " << position 
              << ", Salary: $" << salary << std::endl;
}

double Employee::getSalaryBudget() const {
    return salary;
}
