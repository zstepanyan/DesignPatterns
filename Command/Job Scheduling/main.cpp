#include <iostream>
#include "include/Job.h"
#include "include/JobScheduler.h"
#include "include/StartJobCommand.h"
#include "include/PauseJobCommand.h"
#include "include/CancelJobCommand.h"

int main() {
    Job* job1 = new Job("Data Processing");
    Job* job2 = new Job("Report Generation");

    IJobCommand* startJob1 = new StartJobCommand(job1);
    IJobCommand* startJob2 = new StartJobCommand(job2);
    IJobCommand* pauseJob1 = new PauseJobCommand(job1);
    IJobCommand* cancelJob2 = new CancelJobCommand(job2);

    JobScheduler scheduler;
    scheduler.scheduleJob(startJob1);
    scheduler.scheduleJob(startJob2);
    scheduler.scheduleJob(pauseJob1);
    scheduler.scheduleJob(cancelJob2);

    std::cout << "Executing scheduled jobs..." << std::endl;
    scheduler.runJobs();

    std::cout << "\nUndoing last job..." << std::endl;
    scheduler.undoLastJob();

    delete startJob1;
    delete startJob2;
    delete pauseJob1;
    delete cancelJob2;
    delete job1;
    delete job2;

    return 0;
}
