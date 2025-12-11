#include "CEOApprover.h"

void CEOApprover::approveRequest(IRequest* request) {
    std::cout << "CEO approved the request for " << request->getEmployeeName() << ".\n";
}
