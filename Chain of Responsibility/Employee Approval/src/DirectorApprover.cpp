#include "DirectorApprover.h"

void DirectorApprover::approveRequest(IRequest* request) {
    if (request->getAmount() <= 5000) {
        std::cout << "Director approved the request for " << request->getEmployeeName() << ".\n";
    } 
    else if (nextApprover != nullptr) {
        std::cout << "Director cannot approve the request. Passing to the next level...\n";
        nextApprover->approveRequest(request);
    }
}
