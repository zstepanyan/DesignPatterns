#ifndef GLASS_HOUSE_BUILDER_HPP
#define GLASS_HOUSE_BUILDER_HPP

#include "HouseBuilder.hpp"

class GlassHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override {
        house->walls = "glass panels";
    }
    void buildRoof() override {
        house->roof = "glass roof";
    }
    void buildDoors() override {
        house->doors = "glass doors";
    }
    void buildWindows() override {
        house->windows = "floor-to-ceiling windows";
    }
};

#endif // GLASS_HOUSE_BUILDER_HPP
