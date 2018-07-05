
#include "SortedType.h"
#include <iostream>
using namespace std;

int main(void)
{
    SortedType<int> object;

    cout<<"Length is: "<<object.GetLength()<<'\n';

    object.PutItem(1);
    object.PutItem(2);
    object.PutItem(4);
    object.PutItem(5);
    object.PutItem(7);

    object.PrintListContent();

    int toFind = 6;
    bool isFound = object.GetItem(toFind);
    (isFound) ? cout<<"Item is Found\n" : cout<<"Item is not Found\n";

    toFind = 5;
    isFound = object.GetItem(toFind);
    (isFound) ? cout<<"Item is Found\n" : cout<<"Item is not Found\n";


    bool isfull = object.IsFull();
    (isfull) ? cout<<"List is full\n" : cout<<"List is not full\n";

    bool toDelete = object.DeleteItem(1);

    object.PrintListContent();

    return 0;
}
