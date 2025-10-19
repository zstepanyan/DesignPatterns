#ifndef WINDOWS_BUTTON_HPP
#define WINDOWS_BUTTON_HPP

#include <iostream>
#include "Button.hpp"

class WindowsButton : public Button {
public:
    void paint() override {
        std::cout << "Rendering a Windows style Button.\n";
    }
};

#endif // WINDOWS_BUTTON_HPP
