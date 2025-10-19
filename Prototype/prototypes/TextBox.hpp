#ifndef TEXT_BOX_HPP
#define TEXT_BOX_HPP

#include "DocumentElement.hpp"
#include <string>

class TextBox : public DocumentElement {
private:
    std::string text;
    int fontSize;

public:
    TextBox(const std::string& text = "", int fontSize = 12);
    TextBox(const TextBox& other);
    DocumentElement* clone() const override;
    void print() const override;
    void setText(const std::string& newText);
};

#endif // TEXT_BOX_HPP
