#ifndef IENCRYPTIONSERVICE_H
#define IENCRYPTIONSERVICE_H

#include <string>

class IEncryptionService {
public:
    virtual ~IEncryptionService() = default;
    virtual void encryptFile(const std::string& fileName) = 0;
};

#endif // IENCRYPTIONSERVICE_H
