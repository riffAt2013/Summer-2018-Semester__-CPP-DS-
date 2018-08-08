#include <iostream>
#include "Queue_Using_vector.h"
using namespace std;
int val;

int main()
{
    QueueUsingVector qv;
    qv.enqueue(45);
    qv.enqueue(451);
    qv.enqueue(45434);

    qv.dequeue(val);
    qv.dequeue(val);
    cout<<val;

}
