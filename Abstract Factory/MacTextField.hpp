#ifndef MAC_TEXTFIELD_HPP
#define MAC_TEXTFIELD_HPP

#include <iostream>
#include "TextField.hpp"

class MacTextField : public TextField {
public:
    void paint() override {
        std::cout << "Rendering a Mac style TextField.\n";
    }
};

#endif // MAC_TEXTFIELD_HPP
