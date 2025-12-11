#ifndef ENCRYPTIONSERVICE_H
#define ENCRYPTIONSERVICE_H

#include "IEncryptionService.h"
#include <string>

class EncryptionService : public IEncryptionService {
public:
    void encryptFile(const std::string& fileName) override;
};

#endif // ENCRYPTIONSERVICE_H
