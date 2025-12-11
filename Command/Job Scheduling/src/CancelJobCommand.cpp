#include "CancelJobCommand.h"

CancelJobCommand::CancelJobCommand(Job* job) : job(job) {}

void CancelJobCommand::execute() {
    job->cancel();
}

void CancelJobCommand::undo() {
    job->start(); 
}
