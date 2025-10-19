#ifndef WOODEN_HOUSE_BUILDER_HPP
#define WOODEN_HOUSE_BUILDER_HPP

#include "HouseBuilder.hpp"

class WoodenHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override {
        house->walls = "wooden";
    }
    void buildRoof() override {
        house->roof = "wooden shingles";
    }
    void buildDoors() override {
        house->doors = "wooden doors";
    }
    void buildWindows() override {
        house->windows = "glass windows";
    }
};

#endif // WOODEN_HOUSE_BUILDER_HPP
