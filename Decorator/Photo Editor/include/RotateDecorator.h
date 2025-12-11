#ifndef ROTATEDECORATOR_H
#define ROTATEDECORATOR_H

#include "Decorator.h"

class RotateDecorator : public Decorator {
public:
    RotateDecorator(Image* img, int ang)
        : Decorator(img), angle(ang) {}

    void display() const override;
    void applyEffects() override;
    
private:
    int angle; // Angle of rotation
};

#endif // ROTATEDECORATOR_H
