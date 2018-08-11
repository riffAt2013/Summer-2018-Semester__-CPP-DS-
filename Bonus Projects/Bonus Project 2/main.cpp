#include <iostream>
#include "QueueUsingStack.h"
using namespace std;
int global;

void showVal (QueueUsingStacks _test)
{
    int val;
    while (!_test.isEmpty())
    {
        _test.dequeue(val);
        cout<<val;
        if (!_test.isEmpty())
            cout<<" ->";
    }
}

int main()
{
    QueueUsingStacks myQue;
    if (myQue.isEmpty())
        cout<<"Queue is Empty\n";
    myQue.dequeue(global);

    myQue.enqueue(103);
    showVal(myQue);    cout<<'\n';
    myQue.enqueue(105);
    showVal(myQue);    cout<<'\n';
    myQue.enqueue(10);
    showVal(myQue);    cout<<'\n';
    myQue.enqueue(11);
    showVal(myQue);    cout<<'\n';

    myQue.dequeue(global);
    showVal(myQue);    cout<<'\n';

    myQue.enqueue(9);
    showVal(myQue);    cout<<'\n';

    myQue.makeEmpty();

    myQue.enqueue(10);
    showVal(myQue);    cout<<'\n';

    myQue.enqueue(2);
    showVal(myQue);    cout<<'\n';

    myQue.dequeue(global);
    showVal(myQue);    cout<<'\n';

    myQue.dequeue(global);
    if (myQue.isEmpty())
        cout<<"Queue is Empty\n";

    myQue.dequeue(global);
}
