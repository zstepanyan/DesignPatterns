#ifndef HOUSE_BUILDER_HPP
#define HOUSE_BUILDER_HPP

#include "House.hpp"

class HouseBuilder {
protected:
    House* house;

public:
    HouseBuilder() : house(nullptr) {}
    virtual ~HouseBuilder() {}

    void createNewHouse() {
        house = new House();
    }

    House* getHouse() {
        return house;
    }

    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildDoors() = 0;
    virtual void buildWindows() = 0;
};

#endif // HOUSE_BUILDER_HPP
