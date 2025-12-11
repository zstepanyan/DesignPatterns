#include "PauseJobCommand.h"

PauseJobCommand::PauseJobCommand(Job* job) : job(job) {}

void PauseJobCommand::execute() {
    job->pause();
}

void PauseJobCommand::undo() {
    job->start();
}
