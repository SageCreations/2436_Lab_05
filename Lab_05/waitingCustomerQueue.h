#ifndef H_WaitingCustomerQueue
#define H_WaitingCustomerQueue

#include <queue>
#include "customer.h"
//#include "queueAsArray.h"

class waitingCustomerQueueType : public std::queue<customerType> {
   public:
    waitingCustomerQueueType();
    // Constructor
    // Postcondition: The queue is initialized according to
    //            the parameter size. The value of size
    //            is passed to the constructor of queueType.
    // edit: updated to STL queue library and since allocation
    //       is dynamic size is no longer needed to be allocated
    //       from the beginning.

    void updateWaitingQueue();
    // Function to increment the waiting time of each
    // customer in the queue by one time unit.
};

#endif