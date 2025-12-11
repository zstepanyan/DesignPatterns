#include "IdleState.h"
#include "CoffeeMachine.h"
#include "BrewingState.h"
#include <iostream>

void IdleState::handleRequest(CoffeeMachine* context) {
    std::cout << "Coffee Machine is Idle. Please press 'Start' to begin brewing." << std::endl;
    context->setState(new BrewingState());
}

std::string IdleState::getStateName() const {
    return "Idle";
}
