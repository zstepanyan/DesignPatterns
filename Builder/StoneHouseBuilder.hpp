#ifndef STONE_HOUSE_BUILDER_HPP
#define STONE_HOUSE_BUILDER_HPP

#include "HouseBuilder.hpp"

class StoneHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override {
        house->walls = "stone";
    }
    void buildRoof() override {
        house->roof = "stone slab roof";
    }
    void buildDoors() override {
        house->doors = "metal doors";
    }
    void buildWindows() override {
        house->windows = "reinforced glass windows";
    }
};

#endif // STONE_HOUSE_BUILDER_HPP
