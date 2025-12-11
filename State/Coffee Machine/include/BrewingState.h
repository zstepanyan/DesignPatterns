#ifndef BREWINGSTATE_H
#define BREWINGSTATE_H

#include "ICoffeeMachineState.h"

class BrewingState : public ICoffeeMachineState {
public:
    void handleRequest(CoffeeMachine* context) override;
    std::string getStateName() const override;
};

#endif // BREWINGSTATE_H
