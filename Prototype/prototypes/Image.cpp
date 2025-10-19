#include "Image.hpp"
#include <iostream>

Image::Image(const std::string& path, int width, int height)
    : imagePath(path), width(width), height(height) {}

Image::Image(const Image& other)
    : imagePath(other.imagePath), width(other.width), height(other.height) {}

DocumentElement* Image::clone() const {
    return new Image(*this);
}

void Image::print() const {
    std::cout << "Image: " << imagePath << " (" << width << "x" << height << ")\n";
}

void Image::setImagePath(const std::string& newPath) {
    imagePath = newPath;
}
