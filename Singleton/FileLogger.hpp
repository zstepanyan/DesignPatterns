#ifndef FILE_LOGGER_HPP
#define FILE_LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <mutex>

class FileLogger {
public:
    static FileLogger& getInstance(const std::string& logFile);
    void log(const std::string& message);

private:
    FileLogger(const std::string& logFile);
    FileLogger(const FileLogger&) = delete;
    FileLogger& operator=(const FileLogger&) = delete;
    FileLogger(FileLogger&&) = delete;
    FileLogger& operator=(FileLogger&&) = delete;
    ~FileLogger() = default;

    std::ofstream logStream_;
    static FileLogger instance_;  
    static std::once_flag onceFlag_;
};

#endif // FILE_LOGGER_HPP
