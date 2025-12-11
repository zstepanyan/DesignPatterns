#include "ManagerApprover.h"

void ManagerApprover::approveRequest(IRequest* request) {
    if (request->getAmount() <= 1000) {
        std::cout << "Manager approved the request for " << request->getEmployeeName() << ".\n";
    } 
    else if (nextApprover != nullptr) {
        std::cout << "Manager cannot approve the request. Passing to the next level...\n";
        nextApprover->approveRequest(request);
    }
}
