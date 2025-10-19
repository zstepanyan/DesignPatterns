#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>
#include <iostream>

class House {
public:
    std::string walls;
    std::string roof;
    std::string doors;
    std::string windows;

    void show() const {
        std::cout << "House with " << walls << " walls, "
                  << roof << " roof, "
                  << doors << " doors, and "
                  << windows << " windows.\n";
    }
};

#endif // HOUSE_HPP
