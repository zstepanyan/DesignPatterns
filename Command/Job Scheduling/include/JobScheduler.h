#ifndef JOBSCHEDULER_H
#define JOBSCHEDULER_H

#include "IJobCommand.h"
#include <vector>

class JobScheduler {
public:
    void scheduleJob(IJobCommand* jobCommand);
    void runJobs();
    void undoLastJob();

private:
    std::vector<IJobCommand*> commandHistory;
};

#endif // JOBSCHEDULER_H
