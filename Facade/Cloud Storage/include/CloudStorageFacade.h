#ifndef CLOUDSTORAGEFACADE_H
#define CLOUDSTORAGEFACADE_H

#include <string>
#include "UploadService.h"
#include "VersionControl.h"
#include "BackupService.h"
#include "EncryptionService.h"
#include "AccessControlService.h"

class CloudStorageFacade {
public:
    CloudStorageFacade(UploadService* upload, VersionControl* version, BackupService* backup,
                       EncryptionService* encryption, AccessControlService* accessControl);
    ~CloudStorageFacade();

    void uploadFileWithSecurity(const std::string& fileName);
    void versionAndBackupFile(const std::string& fileName);
    void grantFileAccess(const std::string& fileName, const std::string& user);
    void revokeFileAccess(const std::string& fileName, const std::string& user);

private:
    UploadService* uploadService;
    VersionControl* versionControl;
    BackupService* backupService;
    EncryptionService* encryptionService;
    AccessControlService* accessControlService;
};

#endif // CLOUDSTORAGEFACADE_H
