#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "GUIFactory.hpp"
#include "Button.hpp"
#include "Checkbox.hpp"
#include "TextField.hpp"

class Application {
private:
    GUIFactory* factory;
    Button* button;
    Checkbox* checkbox;
    TextField* textField;

public:
    Application(GUIFactory* factory) : factory(factory) {
        button = factory->createButton();
        checkbox = factory->createCheckbox();
        textField = factory->createTextField();
    }

    void paintUI() {
        button->paint();
        checkbox->paint();
        textField->paint();
    }

    ~Application() {
        delete button;
        delete checkbox;
        delete textField;
    }
};

#endif // APPLICATION_HPP
