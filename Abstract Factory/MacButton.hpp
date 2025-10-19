#ifndef MAC_BUTTON_HPP
#define MAC_BUTTON_HPP

#include <iostream>
#include "Button.hpp"

class MacButton : public Button {
public:
    void paint() override {
        std::cout << "Rendering a Mac style Button.\n";
    }
};

#endif // MAC_BUTTON_HPP
