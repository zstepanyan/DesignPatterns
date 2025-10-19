#include <iostream>
#include "Application.hpp"
#include "WindowsFactory.hpp"
#include "MacFactory.hpp"

int main() {
    GUIFactory* factory;
    factory = new WindowsFactory();
    // factory = new MacFactory();
    Application app(factory);
    app.paintUI();
    delete factory;
    
    return 0;
}
