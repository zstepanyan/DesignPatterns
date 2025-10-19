#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "DocumentElement.hpp"
#include <string>

class Image : public DocumentElement {
private:
    std::string imagePath;
    int width;
    int height;

public:
    Image(const std::string& path = "", int width = 0, int height = 0);
    Image(const Image& other);
    DocumentElement* clone() const override;
    void print() const override;
    void setImagePath(const std::string& newPath);
};

#endif // IMAGE_HPP
