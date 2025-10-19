#ifndef MAC_CHECKBOX_HPP
#define MAC_CHECKBOX_HPP

#include <iostream>
#include "Checkbox.hpp"

class MacCheckbox : public Checkbox {
public:
    void paint() override {
        std::cout << "Rendering a Mac style Checkbox.\n";
    }
};

#endif // MAC_CHECKBOX_HPP
