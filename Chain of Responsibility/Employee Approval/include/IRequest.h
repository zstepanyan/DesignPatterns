#ifndef IREQUEST_H
#define IREQUEST_H

#include <string>

class IRequest {
public:
    virtual ~IRequest() = default;
    virtual std::string getDetails() const = 0;
    virtual double getAmount() const = 0;
    virtual std::string getEmployeeName() const = 0;
};

#endif // IREQUEST_H
