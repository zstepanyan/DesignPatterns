#ifndef GUI_FACTORY_HPP
#define GUI_FACTORY_HPP

#include "Button.hpp"
#include "Checkbox.hpp"
#include "TextField.hpp"

class GUIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
    virtual TextField* createTextField() = 0;
    virtual ~GUIFactory() {}
};

#endif // GUI_FACTORY_HPP
