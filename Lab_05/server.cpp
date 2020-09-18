#include "server.h"

serverType::serverType()
{
    status = "free";
    transactionTime = 0;
}

bool serverType::isFree() const
{
    return (status == "free");
}

void serverType::setBusy()
{
    status = "busy";
}

void serverType::setFree()
{
    status = "free";
}

void serverType::setTransactionTime(int t)
{
    transactionTime = t;
}

void serverType::setTransactionTime()
{
    int time;

    time = currentCustomer.getTransactionTime();

    transactionTime = time;
}

void serverType::decreaseTransactionTime()
{
    transactionTime--;
}

int serverType::getRemainingTransactionTime() const
{
    //cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    //return 0;
    return transactionTime;
}

void serverType::setCurrentCustomer(customerType cCustomer)
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    currentCustomer = cCustomer;
}

int serverType::getCurrentCustomerNumber() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    return currentCustomer.getCustomerNumber();
    // return 0;
}

int serverType::getCurrentCustomerArrivalTime() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    // return 0;
    return currentCustomer.getArrivalTime();
}

int serverType::getCurrentCustomerWaitingTime() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    // return 0;
    return currentCustomer.getWaitingTime();
}

int serverType::getCurrentCustomerTransactionTime() const
{
    // cout << "See Programming Exercise 17 at the end of this chapter." << endl;
    // return 0;
    return currentCustomer.getTransactionTime();
}
