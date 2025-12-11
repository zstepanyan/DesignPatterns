#ifndef IMAGE_H
#define IMAGE_H

#include <string>

class Image {
public:
    virtual ~Image() = default;
    virtual void display() const;
    virtual void applyEffects();
};

#endif // IMAGE_H
