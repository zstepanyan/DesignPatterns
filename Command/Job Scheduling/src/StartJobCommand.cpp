#include "StartJobCommand.h"

StartJobCommand::StartJobCommand(Job* job) : job(job) {}

void StartJobCommand::execute() {
    job->start();
}

void StartJobCommand::undo() {
    job->pause();
}
