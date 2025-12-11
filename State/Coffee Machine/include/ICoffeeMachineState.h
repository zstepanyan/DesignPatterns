#ifndef ICOFFEEMACHINESTATE_H
#define ICOFFEEMACHINESTATE_H

#include <string>

class CoffeeMachine;

class ICoffeeMachineState {
public:
    virtual ~ICoffeeMachineState() = default;
    virtual void handleRequest(CoffeeMachine* context) = 0;
    virtual std::string getStateName() const = 0;
};

#endif // ICOFFEEMACHINESTATE_H
