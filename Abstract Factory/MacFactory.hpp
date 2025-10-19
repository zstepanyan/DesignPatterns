#ifndef MAC_FACTORY_HPP
#define MAC_FACTORY_HPP

#include "GUIFactory.hpp"
#include "MacButton.hpp"
#include "MacCheckbox.hpp"
#include "MacTextField.hpp"

class MacFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new MacButton();
    }

    Checkbox* createCheckbox() override {
        return new MacCheckbox();
    }

    TextField* createTextField() override {
        return new MacTextField();
    }
};

#endif // MAC_FACTORY_HPP
