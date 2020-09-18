#include <iostream>
#include "customer.h"

void customerType::setCustomerInfo(int customerN, int arrvTime, 
                                   int wTime, int tTime)
{
    customerNumber = customerN;
    arrivalTime = arrvTime;
    waitingTime = wTime;
    transactionTime = tTime;
}

customerType::customerType(int customerN, int arrvTime, 
                           int wTime, int tTime)
{
    setCustomerInfo(customerN, arrvTime, wTime, tTime);
}


int customerType::getWaitingTime() const
{
    return waitingTime;
}

void customerType::incrementWaitingTime()
{
    waitingTime++;
}

void customerType::setWaitingTime(int time)
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    waitingTime = time;
 }

int customerType::getArrivalTime() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    return arrivalTime;
    // return 0;
}

int customerType::getTransactionTime() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    return transactionTime;
    // return 0;
}

int customerType::getCustomerNumber() const
{
    //cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    return customerNumber;
    // return 0;
}