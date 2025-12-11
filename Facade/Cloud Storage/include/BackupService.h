#ifndef BACKUPSERVICE_H
#define BACKUPSERVICE_H

#include "IBackupService.h"
#include <string>

class BackupService : public IBackupService {
public:
    void backupFile(const std::string& fileName) override;
};

#endif // BACKUPSERVICE_H
