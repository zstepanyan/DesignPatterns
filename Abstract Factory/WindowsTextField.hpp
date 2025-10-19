#ifndef WINDOWS_TEXTFIELD_HPP
#define WINDOWS_TEXTFIELD_HPP

#include <iostream>
#include "TextField.hpp"

class WindowsTextField : public TextField {
public:
    void paint() override {
        std::cout << "Rendering a Windows style TextField.\n";
    }
};

#endif // WINDOWS_TEXTFIELD_HPP
