#include "BrewingState.h"
#include "CoffeeMachine.h"
#include "DispensingState.h"
#include <iostream>

void BrewingState::handleRequest(CoffeeMachine* context) {
    std::cout << "Brewing coffee... Please wait." << std::endl;
    context->setState(new DispensingState());
}

std::string BrewingState::getStateName() const {
    return "Brewing";
}
