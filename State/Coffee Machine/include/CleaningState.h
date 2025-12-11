#ifndef CLEANINGSTATE_H
#define CLEANINGSTATE_H

#include "ICoffeeMachineState.h"

class CleaningState : public ICoffeeMachineState {
public:
    void handleRequest(CoffeeMachine* context) override;
    std::string getStateName() const override;
};

#endif // CLEANINGSTATE_H
