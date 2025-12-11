#ifndef STARTJOBCOMMAND_H
#define STARTJOBCOMMAND_H

#include "IJobCommand.h"
#include "Job.h"

class StartJobCommand : public IJobCommand {
public:
    StartJobCommand(Job* job);
    void execute() override;
    void undo() override;

private:
    Job* job;
};

#endif // STARTJOBCOMMAND_H
