#include "CleaningState.h"
#include "CoffeeMachine.h"
#include "IdleState.h"
#include <iostream>

void CleaningState::handleRequest(CoffeeMachine* context) {
    std::cout << "Cleaning the coffee machine... Please wait." << std::endl;
    context->setState(new IdleState());
}

std::string CleaningState::getStateName() const {
    return "Cleaning";
}
