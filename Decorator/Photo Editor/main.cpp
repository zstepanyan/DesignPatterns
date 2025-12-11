#include <iostream>
#include "include/Image.h"
#include "include/ResizeDecorator.h"
#include "include/RotateDecorator.h"
#include "include/BrightnessAdjustDecorator.h"

int main() {
    Image* img = new Image(); 
    img = new ResizeDecorator(img, 1920, 1080);
    img = new RotateDecorator(img, 90);
    img = new BrightnessAdjustDecorator(img, 50);

    img->display();
    img->applyEffects();

    delete img;

    return 0;
}
