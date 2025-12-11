#ifndef DECORATOR_H
#define DECORATOR_H

#include "Image.h"

class Decorator : public Image {
public:
    explicit Decorator(Image* img) : image(img) {}
    virtual ~Decorator() { delete image; }
    virtual void display() const override { image->display(); }
    virtual void applyEffects() override { image->applyEffects(); }

protected:
    Image* image; 
};

#endif // DECORATOR_H
