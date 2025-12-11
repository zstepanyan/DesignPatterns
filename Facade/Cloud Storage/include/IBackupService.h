#ifndef IBACKUPSERVICE_H
#define IBACKUPSERVICE_H

#include <string>

class IBackupService {
public:
    virtual ~IBackupService() = default;
    virtual void backupFile(const std::string& fileName) = 0;
};

#endif // IBACKUPSERVICE_H
