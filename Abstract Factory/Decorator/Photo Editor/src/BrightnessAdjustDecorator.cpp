#include "BrightnessAdjustDecorator.h"
#include <iostream>

void BrightnessAdjustDecorator::display() const {
    std::cout << "Displaying image with brightness level: " << brightnessLevel << std::endl;
    image->display();
}

void BrightnessAdjustDecorator::applyEffects() {
    std::cout << "Adjusting brightness to level: " << brightnessLevel << std::endl;
    image->applyEffects();
}
