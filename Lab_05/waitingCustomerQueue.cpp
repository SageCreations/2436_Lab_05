#include "waitingCustomerQueue.h"

waitingCustomerQueueType::waitingCustomerQueueType()
{
}

void waitingCustomerQueueType::updateWaitingQueue()
{
    std::queue<customerType> que;
    customerType cust;
    
    cust.setWaitingTime(-1);  
    int wTime = 0;

	que.push(cust);

    while (wTime != -1)
    {
        cust = que.front();
        que.pop();

        wTime = cust.getWaitingTime();
        if (wTime == -1)
            break;
        cust.incrementWaitingTime();
        que.push(cust);
	}
}
