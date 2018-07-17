      #include <iostream>
#include "queueType.h"
using namespace std;
int item;

int main()
{
    queueType<int> myObject;
    if (myObject.IsEmpty()) cout<<"Queue is empty\n";

    myObject.Enqueue(5);
    myObject.Enqueue(7);
    myObject.Enqueue(4);
    myObject.Enqueue(2);

    if (!myObject.IsEmpty()) cout<<"Queue is not empty\n";

    if (!myObject.IsFull()) cout<<"Queue is not full\n";

    myObject.Enqueue(6);

    myObject.printAll();

    if (myObject.IsFull()) cout<<"\nQueue is full\n";

    try
    {
        myObject.Enqueue(8);
    }
    catch (FullQueue exceptionObject)
    {
        cout<<"Queue Overflow";
    }


    myObject.Dequeue(item);
    myObject.Dequeue(item);

    cout<<'\n';

    myObject.printAll();

    myObject.Dequeue(item);
    myObject.Dequeue(item);
    myObject.Dequeue(item);

    if (myObject.IsEmpty()) cout<<"\nQueue is Empty\n";

    try
    {
        myObject.Dequeue(item);
    }
    catch (EmptyQueue exceptionOb)
    {
        cout<<"Queue underflow\n";
    }

    //check replaceItem
    cout<<"\nChecking replaceItem func.\n";
    queueType<int> object;
    object.Enqueue(1);
    object.Enqueue(2);
    object.Enqueue(3);
    cout<<"Before replace\n";
    object.printAll();
    cout<<"\nAfter replace 3 with 11\n";
    object.ReplaceItem(3,11);
    object.printAll();
}
