#ifndef WINDOWS_FACTORY_HPP
#define WINDOWS_FACTORY_HPP

#include "GUIFactory.hpp"
#include "WindowsButton.hpp"
#include "WindowsCheckbox.hpp"
#include "WindowsTextField.hpp"

class WindowsFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Checkbox* createCheckbox() override {
        return new WindowsCheckbox();
    }

    TextField* createTextField() override {
        return new WindowsTextField();
    }
};

#endif // WINDOWS_FACTORY_HPP
