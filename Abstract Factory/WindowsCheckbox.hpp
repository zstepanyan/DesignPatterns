#ifndef WINDOWS_CHECKBOX_HPP
#define WINDOWS_CHECKBOX_HPP

#include <iostream>
#include "Checkbox.hpp"

class WindowsCheckbox : public Checkbox {
public:
    void paint() override {
        std::cout << "Rendering a Windows style Checkbox.\n";
    }
};

#endif // WINDOWS_CHECKBOX_HPP
