#ifndef H_WaitingCustomerQueue
#define H_WaitingCustomerQueue

#include "customer.h"
#include "queueTypeX.h"

class waitingCustomerQueueType : public queueTypeX<customerType> {
   public:
    waitingCustomerQueueType(int size = 100);
    // Constructor
    // Postcondition: The queue is initialized according to
    //            the parameter size. The value of size
    //            is passed to the constructor of queueType.

    void updateWaitingQueue();
    // Function to increment the waiting time of each
    // customer in the queue by one time unit.
};

#endif