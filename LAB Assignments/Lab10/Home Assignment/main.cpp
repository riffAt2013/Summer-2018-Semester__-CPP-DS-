#include <bits/stdc++.h>
using namespace std;

void printVal (std::queue<int> data)
{
    cout<<"Queue items: ";
    while (!data.empty())
    {
        cout<<data.front()<<"  ";
        data.pop();
    }
    cout<<'\n';
}

void replaceItem(queue<int>&orignalQue, int oldItem, int newItem)
{
    queue<int>temp;

    while (true)
    {
        if(orignalQue.front()==oldItem)
        {
            temp.push(newItem);
            orignalQue.pop();
            if (orignalQue.empty()) break;
        }

        int value = orignalQue.front();
        temp.push(value);
        orignalQue.pop();
        if (orignalQue.empty()) break;
    }

    orignalQue = temp;
}

int main()
{
    std::queue<int> myQue;   //create Queue
    if (myQue.empty()) cout<<"Queue is Empty\n";    //check empty
    myQue.push(5);
    myQue.push(7);
    myQue.push(4);
    myQue.push(2);      //push 4 item

    printVal (myQue);   //print Queue

    if (!myQue.empty()) cout<<"Queue is not Empty\n";   //check empty
    myQue.push(6);  //pushed final

    printVal(myQue);        //print queue

    //Dequeue operation w/o enquing extra 8 to check exception

    myQue.pop();    //dequeue == pop
    myQue.pop();

    printVal(myQue);

    myQue.pop();
    myQue.pop();
    myQue.pop();

    if (myQue.empty()) cout<<"Queue is Empty\n";    //check empty

    //Check replaceItem func.
    cout<<"\nChecking replace Item functionality\n";
    std::queue<int> replaceItemChecker;
    replaceItemChecker.push(4);
    replaceItemChecker.push(77);
    replaceItemChecker.push(7);
    replaceItemChecker.push(71);
    replaceItemChecker.push(-5);
    cout<<"Before replacing:\n";
    printVal(replaceItemChecker);
    replaceItem(replaceItemChecker,71,1212);
    cout<<"After replacing:\n";
    printVal(replaceItemChecker);


    return 0;
}
