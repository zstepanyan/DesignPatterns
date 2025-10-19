#include <iostream>
#include "WoodenHouseBuilder.hpp"
#include "StoneHouseBuilder.hpp"
#include "GlassHouseBuilder.hpp"
#include "ConstructionEngineer.hpp"

int main() {
    WoodenHouseBuilder woodenBuilder;
    ConstructionEngineer engineer1(&woodenBuilder);
    engineer1.constructHouse();
    House* woodenHouse = engineer1.getHouse();
    std::cout << "Wooden House: ";
    woodenHouse->show();

    StoneHouseBuilder stoneBuilder;
    ConstructionEngineer engineer2(&stoneBuilder);
    engineer2.constructHouse();
    House* stoneHouse = engineer2.getHouse();
    std::cout << "Stone House: ";
    stoneHouse->show();

    GlassHouseBuilder glassBuilder;
    ConstructionEngineer engineer3(&glassBuilder);
    engineer3.constructHouse();
    House* glassHouse = engineer3.getHouse();
    std::cout << "Glass House: ";
    glassHouse->show();

    delete woodenHouse;
    delete stoneHouse;
    delete glassHouse;

    return 0;
}
