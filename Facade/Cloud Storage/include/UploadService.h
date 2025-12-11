#ifndef UPLOADSERVICE_H
#define UPLOADSERVICE_H

#include "IUploadService.h"
#include <string>

class UploadService : public IUploadService {
public:
    void uploadFile(const std::string& fileName) override;
};

#endif // UPLOADSERVICE_H
