#ifndef IVERSIONCONTROL_H
#define IVERSIONCONTROL_H

#include <string>

class IVersionControl {
public:
    virtual ~IVersionControl() = default;
    virtual void createVersion(const std::string& fileName) = 0;
};

#endif // IVERSIONCONTROL_H
