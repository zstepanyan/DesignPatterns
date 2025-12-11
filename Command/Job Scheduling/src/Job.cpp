#include "Job.h"

Job::Job(const std::string& jobName) : name(jobName), isRunning(false) {}

void Job::start() {
    if (!isRunning) {
        std::cout << "Starting job: " << name << std::endl;
        isRunning = true;
    }
}

void Job::pause() {
    if (isRunning) {
        std::cout << "Pausing job: " << name << std::endl;
        isRunning = false;
    }
}

void Job::cancel() {
    std::cout << "Cancelling job: " << name << std::endl;
    isRunning = false;
}
