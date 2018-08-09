#include <iostream>
#include "Queue_Using_vector.h"
#include <exception>

using namespace std;
int val;

int main()
{
    QueueUsingVector qv;

    if(qv.isEmpty()) cout<<"Queue is Empty\n";

    try {
        qv.dequeue(val);
    }

    catch (exception e)
    {
        cout<<"Can not dequeue as its empty\n";
    }

    qv.enqueue(1);
    qv.enqueue(2);
    qv.enqueue(3);
    qv.enqueue(4);
    qv.enqueue(5);
    qv.enqueue(6);      //final 1->2->3->4->5->6

    qv.dequeue(val);

    qv.front(val);

    cout<<"Front item is: "<<val;


    qv.enqueue(7);

    qv.front(val);

    cout<<"\nEnqueued..Front is still: "<<val;


    qv.makeEmpty();

    qv.enqueue(8);
    qv.front(val);

    cout<<"\nMakeEmpty x Enqueued 8..Front check: "<<val;
    qv.enqueue(9);

    qv.dequeue(val);

    cout<<"\nDequeued front.. Front check: "<<val;

    qv.dequeue(val);

    if (qv.isEmpty()) cout<<"\nQueue is Empty after last dequeue\n";

    cout<<"Final Size: "<<qv.size();

}
