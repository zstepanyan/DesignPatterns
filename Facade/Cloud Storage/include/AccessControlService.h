#ifndef ACCESSCONTROLSERVICE_H
#define ACCESSCONTROLSERVICE_H

#include "IAccessControlService.h"
#include <string>

class AccessControlService : public IAccessControlService {
public:
    void grantAccess(const std::string& fileName, const std::string& user) override;
    void revokeAccess(const std::string& fileName, const std::string& user) override;
};

#endif // ACCESSCONTROLSERVICE_H
