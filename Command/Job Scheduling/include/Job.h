#ifndef JOB_H
#define JOB_H

#include <string>
#include <iostream>

class Job {
public:
    Job(const std::string& jobName);

    void start();
    void pause();
    void cancel();
    
private:
    std::string name;
    bool isRunning;
};

#endif // JOB_H
