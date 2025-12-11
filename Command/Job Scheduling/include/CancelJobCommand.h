#ifndef CANCELJOBCOMMAND_H
#define CANCELJOBCOMMAND_H

#include "IJobCommand.h"
#include "Job.h"

class CancelJobCommand : public IJobCommand {
public:
    CancelJobCommand(Job* job);
    void execute() override;
    void undo() override;

private:
    Job* job;
};

#endif // CANCELJOBCOMMAND_H
