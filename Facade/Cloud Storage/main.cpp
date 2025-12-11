#include <iostream>
#include "include/CloudStorageFacade.h"
#include "include/UploadService.h"
#include "include/VersionControl.h"
#include "include/BackupService.h"
#include "include/EncryptionService.h"
#include "include/AccessControlService.h"

int main() {
    UploadService* uploadService = new UploadService();
    VersionControl* versionControl = new VersionControl();
    BackupService* backupService = new BackupService();
    EncryptionService* encryptionService = new EncryptionService();
    AccessControlService* accessControlService = new AccessControlService();

    CloudStorageFacade cloudStorageFacade(uploadService, versionControl, backupService,
                                          encryptionService, accessControlService);

    cloudStorageFacade.uploadFileWithSecurity("file1.txt");
    cloudStorageFacade.versionAndBackupFile("file1.txt");
    cloudStorageFacade.grantFileAccess("file1.txt", "user1");
    cloudStorageFacade.revokeFileAccess("file1.txt", "user1");

    return 0;
}
