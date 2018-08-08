#include <iostream>
#include "Queue_Using_vector.h"

using namespace std;


QueueUsingVector::QueueUsingVector()
{
    cout<<"Queue is created\n";
}

bool QueueUsingVector::enqueue(int val)
{
    que.push_back(val);
    return true;
}

bool QueueUsingVector::dequeue(int& val)
{
    if (que.empty()) return false;

    auto itrtr = que.begin();
    val = *itrtr;
    que.erase(itrtr);
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
    return true;
}
