#include "FileLogger.hpp"

std::shared_ptr<FileLogger> FileLogger::instance_ = nullptr;

std::shared_ptr<FileLogger> FileLogger::getInstance(const std::string& logFile) {
    if (!instance_) {
        instance_ = std::make_shared<FileLogger>(logFile);
    }
    return instance_;
}

FileLogger::FileLogger(const std::string& logFile) {
    logStream_.open(logFile, std::ios::out | std::ios::app);
    if (!logStream_) {
        std::cerr << "Failed to open log file." << std::endl;
    }
}

FileLogger::~FileLogger() {
    if (logStream_.is_open()) {
        logStream_.close();
    }
}

void FileLogger::log(const std::string& message) {
    if (logStream_.is_open()) {
        logStream_ << message << std::endl;
    }
}
