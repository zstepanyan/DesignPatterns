#include "Chart.hpp"
#include <iostream>

Chart::Chart(const std::string& title) : title(title) {}

Chart::Chart(const Chart& other) : title(other.title), dataPoints(other.dataPoints) {}

void Chart::addDataPoint(int value) {
    dataPoints.push_back(value);
}

DocumentElement* Chart::clone() const {
    return new Chart(*this);
}

void Chart::print() const {
    std::cout << "Chart: " << title << " Data Points: ";
    for (auto val : dataPoints) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}
