#include "DispensingState.h"
#include "CoffeeMachine.h"
#include "CleaningState.h"
#include <iostream>

void DispensingState::handleRequest(CoffeeMachine* context) {
    std::cout << "Dispensing your coffee! Enjoy your drink." << std::endl;
    context->setState(new CleaningState());
}

std::string DispensingState::getStateName() const {
    return "Dispensing";
}
