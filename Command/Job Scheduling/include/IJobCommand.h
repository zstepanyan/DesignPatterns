#ifndef IJOBCOMMAND_H
#define IJOBCOMMAND_H

class IJobCommand {
public:
    virtual ~IJobCommand() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // IJOBCOMMAND_H
