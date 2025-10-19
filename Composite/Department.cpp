#include "Department.hpp"
#include "Utils.hpp"
#include <iostream>
#include <algorithm>

Department::Department(const std::string& name) : name(name) {}

Department::~Department() {
    for (auto comp : components) {
        delete comp;
    }
    components.clear();
}

void Department::displayInfo(int indent) const {
    std::cout << Utils::indentString(indent) << "Department: " << name << std::endl;
    for (auto comp : components) {
        comp->displayInfo(indent + 4);
    }
}

double Department::getSalaryBudget() const {
    double total = 0;
    for (auto comp : components) {
        total += comp->getSalaryBudget();
    }
    return total;
}

void Department::add(OrgComponent* component) {
    components.push_back(component);
}

void Department::remove(OrgComponent* component) {
    components.erase(std::remove(components.begin(), components.end(), component), components.end());
}
