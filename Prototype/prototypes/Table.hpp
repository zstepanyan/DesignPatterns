#ifndef TABLE_HPP
#define TABLE_HPP

#include "DocumentElement.hpp"
#include <vector>
#include <string>

class Table : public DocumentElement {
private:
    int rows;
    int cols;
    std::vector<std::vector<std::string>> data;

public:
    Table(int rows = 0, int cols = 0);
    Table(const Table& other);

    void setCell(int row, int col, const std::string& value);
    DocumentElement* clone() const override;
    void print() const override;
};

#endif // TABLE_HPP
