#include <bits/stdc++.h>
using namespace std;
 
void PrintAll(stack<int> tempStack)
{
    stack<int> temp = tempStack;
    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<'\n';
}
 
 
void replaceItem(stack<int>& originalStack, int oldItem, int newItem)
{
    stack<int> temp;
    while(!originalStack.empty())
    {
        if(originalStack.top() == oldItem)
            originalStack.top() = newItem;
        temp.push(originalStack.top());
        originalStack.pop();
    }
    while(!temp.empty())
    {
        originalStack.push(temp.top());
        temp.pop();
    }
 
}
 
int main ()
{
 
    stack<int> object;
    if(object.empty())
        cout<<"Stack is Empty\n";
    object.push(5);
    object.push(7);
    object.push(4);
    object.push(2);
 
    if (!object.empty())
        cout<<"Stack is not Empty\n";
 
 
    PrintAll(object);
 
    object.push(3);
    PrintAll(object);
 
    object.pop();
    object.pop();
 
    cout<<object.top();
 
    cout<<endl;
 
 
    //check replaceItem
 
    stack<int> newOb;
    newOb.push(21);
    newOb.push(26);
    newOb.push(13);
    newOb.push(26);
    newOb.push(29);
    replaceItem(newOb,26,9);
    PrintAll(newOb);
 
 
 
    return 0;
}
