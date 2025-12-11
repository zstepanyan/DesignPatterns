#include "JobScheduler.h"
#include <iostream>

void JobScheduler::scheduleJob(IJobCommand* jobCommand) {
    commandHistory.push_back(jobCommand);
}

void JobScheduler::runJobs() {
    for (auto& command : commandHistory) {
        command->execute();
    }
}

void JobScheduler::undoLastJob() {
    if (!commandHistory.empty()) {
        IJobCommand* lastCommand = commandHistory.back();
        lastCommand->undo();
        commandHistory.pop_back();
    } 
    else {
        std::cout << "No job to undo." << std::endl;
    }
}
