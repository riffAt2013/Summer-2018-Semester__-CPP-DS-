#include <iostream>
#include "Queue_Using_vector.h"

using namespace std;


QueueUsingVector::QueueUsingVector()
{
    mySize = 0;
    cout<<"Queue is created\n";
}

bool QueueUsingVector::enqueue(int val)
{
    que.push_back(val);
    mySize++;
    return true;
}

bool QueueUsingVector::dequeue(int& val)
{
    if (que.empty()) return false;

    auto itrtr = que.begin();
    que.erase(itrtr);
    itrtr = que.begin();
    val = *itrtr;
    mySize--;
    return true;
}

bool QueueUsingVector::front(int &val)
{
    if (que.empty()) return false;

    auto itr = que.begin();
    val = *itr;
    return true;
}

bool QueueUsingVector::isEmpty()
{
    return que.empty();
}

bool QueueUsingVector::makeEmpty()
{
    if (que.empty()) return false;
    que.clear();
    mySize = 0;
    return true;
}

int QueueUsingVector::size()
{
    return mySize;
}

bool QueueUsingVector::isFull()
{
    if (mySize>que.capacity()) return true;
    return false;
}
