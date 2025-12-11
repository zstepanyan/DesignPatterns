#include <iostream>
#include "include/CoffeeMachine.h"
#include "include/IdleState.h"

int main() {
    CoffeeMachine coffeeMachine;
    coffeeMachine.showState();
    coffeeMachine.request();   
    coffeeMachine.showState();   
    coffeeMachine.request();   
    coffeeMachine.showState();   
    coffeeMachine.request();  
    coffeeMachine.showState();   
    coffeeMachine.request();  
    coffeeMachine.showState();  

    return 0;
}
