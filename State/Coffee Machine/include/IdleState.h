#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "ICoffeeMachineState.h"

class IdleState : public ICoffeeMachineState {
public:
    void handleRequest(CoffeeMachine* context) override;
    std::string getStateName() const override;
};

#endif // IDLESTATE_H
