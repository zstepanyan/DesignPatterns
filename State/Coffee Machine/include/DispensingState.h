#ifndef DISPENSINGSTATE_H
#define DISPENSINGSTATE_H

#include "ICoffeeMachineState.h"

class DispensingState : public ICoffeeMachineState {
public:
    void handleRequest(CoffeeMachine* context) override;
    std::string getStateName() const override;
};

#endif // DISPENSINGSTATE_H
