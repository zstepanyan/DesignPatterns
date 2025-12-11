#ifndef PAUSEJOBCOMMAND_H
#define PAUSEJOBCOMMAND_H

#include "IJobCommand.h"
#include "Job.h"

class PauseJobCommand : public IJobCommand {
public:
    PauseJobCommand(Job* job);
    void execute() override;
    void undo() override;

private:
    Job* job;
};

#endif // PAUSEJOBCOMMAND_H
