#ifndef PROTOTYPE_REGISTRY_HPP
#define PROTOTYPE_REGISTRY_HPP

#include "DocumentElement.hpp"
#include <unordered_map>
#include <string>

class PrototypeRegistry {
private:
    std::unordered_map<std::string, DocumentElement*> prototypes;

public:
    ~PrototypeRegistry();

    void registerPrototype(const std::string& key, DocumentElement* prototype);
    DocumentElement* createClone(const std::string& key) const;
};

#endif // PROTOTYPE_REGISTRY_HPP
