#include "CloudStorageFacade.h"
#include <iostream>

CloudStorageFacade::CloudStorageFacade(UploadService* upload, VersionControl* version,
                                       BackupService* backup, EncryptionService* encryption,
                                       AccessControlService* accessControl)
    : uploadService(upload), versionControl(version), backupService(backup),
      encryptionService(encryption), accessControlService(accessControl) {}

CloudStorageFacade::~CloudStorageFacade() {
    delete uploadService;
    delete versionControl;
    delete backupService;
    delete encryptionService;
    delete accessControlService;
}

void CloudStorageFacade::uploadFileWithSecurity(const std::string& fileName) {
    uploadService->uploadFile(fileName);
    encryptionService->encryptFile(fileName);
}

void CloudStorageFacade::versionAndBackupFile(const std::string& fileName) {
    versionControl->createVersion(fileName);
    backupService->backupFile(fileName);
}

void CloudStorageFacade::grantFileAccess(const std::string& fileName, const std::string& user) {
    accessControlService->grantAccess(fileName, user);
}

void CloudStorageFacade::revokeFileAccess(const std::string& fileName, const std::string& user) {
    accessControlService->revokeAccess(fileName, user);
}
