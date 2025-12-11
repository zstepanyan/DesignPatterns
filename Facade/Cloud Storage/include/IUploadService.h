#ifndef IUPLOADSERVICE_H
#define IUPLOADSERVICE_H

#include <string>

class IUploadService {
public:
    virtual ~IUploadService() = default;
    virtual void uploadFile(const std::string& fileName) = 0;
};

#endif // IUPLOADSERVICE_H
