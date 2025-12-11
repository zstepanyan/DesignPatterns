#include "CoffeeMachine.h"
#include "IdleState.h"
#include <iostream>

CoffeeMachine::CoffeeMachine() {
    state = new IdleState();
}

CoffeeMachine::~CoffeeMachine() {
    delete state;
}

void CoffeeMachine::setState(ICoffeeMachineState* newState) {
    delete state;
    state = newState;
}

void CoffeeMachine::request() {
    state->handleRequest(this);  
}

void CoffeeMachine::showState() const {
    std::cout << "Current state: " << state->getStateName() << std::endl;
}
