#include "RotateDecorator.h"
#include <iostream>

void RotateDecorator::display() const {
    std::cout << "Displaying rotated image by " << angle << " degrees." << std::endl;
    image->display();
}

void RotateDecorator::applyEffects() {
    std::cout << "Applying rotation effect: " << angle << " degrees." << std::endl;
    image->applyEffects();
}
