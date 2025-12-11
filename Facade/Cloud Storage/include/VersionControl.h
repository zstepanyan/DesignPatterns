#ifndef VERSIONCONTROL_H
#define VERSIONCONTROL_H

#include "IVersionControl.h"
#include <string>

class VersionControl : public IVersionControl {
public:
    void createVersion(const std::string& fileName) override;
};

#endif // VERSIONCONTROL_H
