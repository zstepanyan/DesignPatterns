#include "TeamLeadApprover.h"

void TeamLeadApprover::approveRequest(IRequest* request) {
    if (request->getAmount() <= 500) {
        std::cout << "Team Lead approved the request for " << request->getEmployeeName() << ".\n";
    } 
    else if (nextApprover != nullptr) {
        std::cout << "Team Lead cannot approve the request. Passing to the next level...\n";
        nextApprover->approveRequest(request);
    }
}
