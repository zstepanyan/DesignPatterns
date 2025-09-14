#include "FileLogger.hpp"

FileLogger FileLogger::instance_("");
std::once_flag FileLogger::onceFlag_;

FileLogger& FileLogger::getInstance(const std::string& logFile) {
    std::call_once(onceFlag_, [&logFile]() {
        instance_ = FileLogger(logFile);
    });
    
    return instance_;
}

FileLogger::FileLogger(const std::string& logFile) {
    logStream_.open(logFile, std::ios::out | std::ios::app);
    if (!logStream_) {
        std::cerr << "Failed to open log file: " << logFile << std::endl;
    }
}

void FileLogger::log(const std::string& message) {
    if (logStream_.is_open()) {
        logStream_ << message << std::endl;
    }
}
