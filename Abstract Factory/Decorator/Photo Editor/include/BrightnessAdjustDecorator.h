#ifndef BRIGHTNESSADJUSTDECORATOR_H
#define BRIGHTNESSADJUSTDECORATOR_H

#include "Decorator.h"

class BrightnessAdjustDecorator : public Decorator {
public:
    BrightnessAdjustDecorator(Image* img, int level)
        : Decorator(img), brightnessLevel(level) {}

    void display() const override;
    void applyEffects() override;

private:
    int brightnessLevel;
};

#endif // BRIGHTNESSADJUSTDECORATOR_H
