#include <iostream>
#include "include/EmployeeRequest.h"
#include "include/TeamLeadApprover.h"
#include "include/ManagerApprover.h"
#include "include/DirectorApprover.h"
#include "include/CEOApprover.h"

int main() {
    EmployeeRequest* request = new EmployeeRequest("John Doe", "Requesting leave for 3 days", 1200);
    IApprover* teamLead = new TeamLeadApprover();
    IApprover* manager = new ManagerApprover();
    IApprover* director = new DirectorApprover();
    IApprover* ceo = new CEOApprover();

    teamLead->setNextApprover(manager);
    manager->setNextApprover(director);
    director->setNextApprover(ceo);
    teamLead->approveRequest(request);

    delete request;
    delete teamLead;
    delete manager;
    delete director;
    delete ceo;

    return 0;
}
