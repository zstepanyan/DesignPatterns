#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

#include "ICoffeeMachineState.h"

class CoffeeMachine {
public:
    CoffeeMachine();
    ~CoffeeMachine();

    void setState(ICoffeeMachineState* newState);
    void request();
    void showState() const;

private:
    ICoffeeMachineState* state;
};

#endif // COFFEEMACHINE_H
