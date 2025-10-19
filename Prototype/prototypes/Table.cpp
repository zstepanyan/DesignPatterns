#include "Table.hpp"
#include <iostream>

Table::Table(int rows, int cols) : rows(rows), cols(cols) {
    data.resize(rows, std::vector<std::string>(cols, ""));
}

Table::Table(const Table& other) : rows(other.rows), cols(other.cols), data(other.data) {}

void Table::setCell(int row, int col, const std::string& value) {
    if (row < rows && col < cols) {
        data[row][col] = value;
    }
}

DocumentElement* Table::clone() const {
    return new Table(*this);
}

void Table::print() const {
    std::cout << "Table (" << rows << "x" << cols << "):\n";
    for (const auto& row : data) {
        for (const auto& cell : row) {
            std::cout << cell << "\t";
        }
        std::cout << "\n";
    }
}
