#include "QueueUsingStack.h"
#include <iostream>
#include <limits.h>
using namespace std;


QueueUsingStacks::QueueUsingStacks()
{
        cout<<"Queue is created\n";
}

QueueUsingStacks::~QueueUsingStacks() {}

bool QueueUsingStacks::isEmpty()
{
    return orgStack.empty();
}

bool QueueUsingStacks::isFull()
{
    try {
    orgStack.push(INT_MAX);
    orgStack.pop();
    return false;
    }
    catch (exception object)
    {
        return false;
    }
}

bool QueueUsingStacks::enqueue(int _val)
{
        if (isFull()) return false;
        orgStack.push(_val);
        sizeOfStack++;
        return true;
}

bool QueueUsingStacks::dequeue(int& _val)
{
    if (isEmpty()) {cout<<"Cant dequeue. Queue already empty\n"; return false;}
    while (!orgStack.empty())
    {
        revStack.push(orgStack.top());        orgStack.pop();
    }
    _val = revStack.top();      revStack.pop();
    while (!revStack.empty())
    {
        orgStack.push(revStack.top());      revStack.pop();
    }
    sizeOfStack--;
    return true;
}

bool QueueUsingStacks::front(int& _val)
{
    if (isEmpty()) return false;
    while (!orgStack.empty())
    {
        revStack.push(orgStack.top());        orgStack.pop();
    }
    _val = revStack.top();
    while (!revStack.empty())
    {
        orgStack.push(revStack.top());      revStack.pop();
    }
    return true;
}

bool QueueUsingStacks::makeEmpty()
{
    while (!orgStack.empty()) orgStack.pop();
    cout<<"Queue made Empty\n";
    return true;
}

int QueueUsingStacks::size()
{
    return sizeOfStack;
}
