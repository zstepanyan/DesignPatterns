#include "AccessControlService.h"
#include <iostream>

void AccessControlService::grantAccess(const std::string& fileName, const std::string& user) {
    std::cout << "Granting access to " << user << " for file: " << fileName << std::endl;
}

void AccessControlService::revokeAccess(const std::string& fileName, const std::string& user) {
    std::cout << "Revoking access for " << user << " to file: " << fileName << std::endl;
}
