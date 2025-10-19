#include "TextBox.hpp"
#include <iostream>

TextBox::TextBox(const std::string& text, int fontSize) : text(text), fontSize(fontSize) {}

TextBox::TextBox(const TextBox& other) : text(other.text), fontSize(other.fontSize) {}

DocumentElement* TextBox::clone() const {
    return new TextBox(*this);
}

void TextBox::print() const {
    std::cout << "TextBox: \"" << text << "\" (Font size: " << fontSize << ")\n";
}

void TextBox::setText(const std::string& newText) {
    text = newText;
}
