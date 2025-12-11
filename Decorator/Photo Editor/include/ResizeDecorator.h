#ifndef RESIZEDECORATOR_H
#define RESIZEDECORATOR_H

#include "Decorator.h"

class ResizeDecorator : public Decorator {
public:
    ResizeDecorator(Image* img, int w, int h)
        : Decorator(img), width(w), height(h) {}
    
    void display() const override;
    void applyEffects() override;

private:
    int width, height;
};

#endif // RESIZEDECORATOR_H
