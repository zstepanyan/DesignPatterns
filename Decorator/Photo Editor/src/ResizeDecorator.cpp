#include "ResizeDecorator.h"
#include <iostream>

void ResizeDecorator::display() const {
    std::cout << "Displaying resized image to " << width << "x" << height << std::endl;
    image->display();
}

void ResizeDecorator::applyEffects() {
    std::cout << "Applying resize effect: " << width << "x" << height << std::endl;
    image->applyEffects();
}
