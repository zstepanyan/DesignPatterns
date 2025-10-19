#ifndef CHART_HPP
#define CHART_HPP

#include "DocumentElement.hpp"
#include <vector>
#include <string>

class Chart : public DocumentElement {
private:
    std::string title;
    std::vector<int> dataPoints;

public:
    Chart(const std::string& title = "");
    Chart(const Chart& other);
    void addDataPoint(int value);
    DocumentElement* clone() const override;
    void print() const override;
};

#endif // CHART_HPP
