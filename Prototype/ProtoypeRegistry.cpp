#include "PrototypeRegistry.hpp"

PrototypeRegistry::~PrototypeRegistry() {
    for (auto& pair : prototypes) {
        delete pair.second;
    }
}

void PrototypeRegistry::registerPrototype(const std::string& key, DocumentElement* prototype) {
    prototypes[key] = prototype;
}

DocumentElement* PrototypeRegistry::createClone(const std::string& key) const {
    auto it = prototypes.find(key);
    if (it != prototypes.end()) {
        return it->second->clone();
    }
    return nullptr;
}
