#ifndef DOCUMENT_ELEMENT_HPP
#define DOCUMENT_ELEMENT_HPP

#include <string>

class DocumentElement {
public:
    virtual DocumentElement* clone() const = 0;
    virtual void print() const = 0;
    virtual ~DocumentElement() {}
};

#endif // DOCUMENT_ELEMENT_HPP
