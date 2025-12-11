#ifndef IACCESSCONTROLSERVICE_H
#define IACCESSCONTROLSERVICE_H

#include <string>

class IAccessControlService {
public:
    virtual ~IAccessControlService() = default;
    virtual void grantAccess(const std::string& fileName, const std::string& user) = 0;
    virtual void revokeAccess(const std::string& fileName, const std::string& user) = 0;
};

#endif // IACCESSCONTROLSERVICE_H
