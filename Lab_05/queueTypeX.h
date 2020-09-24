#ifndef H_queueTypeX
#define H_queueTypeX
  
#include <iostream> 
#include <cassert>

#include <queue>
#include "queueADT.h" 

using namespace std;

template <class Type>
class queueTypeX: public queueADT<Type>
{
public:
    const queueTypeX<Type>& operator=(const queueTypeX<Type>&); 
      //Overload the assignment operator.

    bool isEmptyQueue() const;
      //Function to determine whether the queue is empty.
      //Postcondition: Returns true if the queue is empty,
      //               otherwise returns false.

    bool isFullQueue() const;
      //Function to determine whether the queue is full.
      //Postcondition: Returns true if the queue is full,
      //               otherwise returns false.

    void initializeQueue();
      //Function to initialize the queue to an empty state.
      //Postcondition: The queue is empty.

    Type front() const;
      //Function to return the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the first 
      //               element of the queue is returned.  
    Type back() const;
      //Function to return the last element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the last 
      //               element of the queue is returned.

    void addQueue(const Type& queueElement);
      //Function to add queueElement to the queue.
      //Precondition: The queue exists and is not full.
      //Postcondition: The queue is changed and queueElement
      //               is added to the queue.

    void deleteQueue();
      //Function to remove the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: The queue is changed and the first 
      //               element is removed from the queue.

    queueTypeX(int queueSize = 100); 
      //Constructor

    queueTypeX(const queueTypeX<Type>& otherQueue); 
      //Copy constructor

    ~queueTypeX(); 
      //Destructor

private:
    int maxQueueSize; //variable to store the maximum queue size
    int count;        //variable to store the number of
                      //elements in the queue
    //int queueFront;   //variable to point to the first
                      //element of the queue
    //int queueRear;    //variable to point to the last
                      //element of the queue
    //Type *list;       //pointer to the array that holds 
                      //the queue elements */

    queue<Type> waitLine;                  
};

template <class Type>
bool queueTypeX<Type>::isEmptyQueue() const
{
    return (waitLine.empty());
} //end isEmptyQueue

template <class Type>
bool queueTypeX<Type>::isFullQueue() const
{
    return ((int)waitLine.size() == maxQueueSize);
} //end isFullQueue

template <class Type>
void queueTypeX<Type>::initializeQueue()
{
    waitLine.front() = 0;
    waitLine.back() = maxQueueSize - 1;
    count = 0;
} //end initializeQueue

template <class Type>
Type queueTypeX<Type>::front() const
{
    assert(!isEmptyQueue());
    return waitLine.front(); 
} //end front

template <class Type>
Type queueTypeX<Type>::back() const
{
    assert(!isEmptyQueue());
    return waitLine.back();
} //end back

template <class Type>
void queueTypeX<Type>::addQueue(const Type& newElement)
{
    if (!isFullQueue())
    {   
        //queueRear = (queueRear + 1) % maxQueueSize; //use mod
                            //operator to advance queueRear  
                            //because the array is circular
        count++;
        waitLine.push(newElement);
    }
    else
        cout << "Cannot add to a full queue." << endl; 
} //end addQueue

template <class Type>
void queueTypeX<Type>::deleteQueue()
{
    if (!isEmptyQueue())
    {   
        count--;
        waitLine.pop();
        //queueFront = (queueFront + 1) % maxQueueSize; //use the
                        //mod operator to advance queueFront 
                        //because the array is circular 
    }
    else
        cout << "Cannot remove from an empty queue." << endl;
} //end deleteQueue

    //Constructor
template <class Type>
queueTypeX<Type>::queueTypeX(int queueSize)   
{
    if (queueSize <= 0)
    {
        cout << "Size of the array to hold the queue must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;

        maxQueueSize = 100;
    }
    else
        maxQueueSize = queueSize;   //set maxQueueSize to 
                                    //queueSize

    waitLine.front() = 0;                 //initialize queueFront
    waitLine.back() = maxQueueSize - 1;   //initialize queueRear
    count = 0;
    waitLine = new Type[maxQueueSize];  //create the array to
                                    //hold the queue elements
} //end constructor

    //Destructor
template <class Type>
queueTypeX<Type>::~queueTypeX()   
{
    while (!waitLine.empty()) {
      waitLine.pop();
    }
} //end destructor

template <class Type>
const queueTypeX<Type>& queueTypeX<Type>::operator=(const queueTypeX<Type>&)
{
    cout << "Write the definition of the function "
         << "to overload the assignment operator." << endl;
} //end assignment operator

template <class Type>
queueTypeX<Type>::queueTypeX(const queueTypeX<Type>& otherQueue)
{
    cout << "Write the definition of the copy constructor."
         << endl;
} //end copy constructor

#endif
