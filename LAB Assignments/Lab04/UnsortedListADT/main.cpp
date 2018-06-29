#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

int main ()
{

    unsortedtype<int> object;

    if (object.getLength()==0) cout<<"List Empty"<<'\n';

    object.insertItem(23);
    object.insertItem(-57);
    object.insertItem(25);
    object.insertItem(78);

    int index=0;
    while (index < object.getLength())
        {
        if (index!=object.getLength()-1) cout<<object.printSpecific(index) << ", ";
        else cout << object.printSpecific(index) << '\n';
        index++;
        }


    object.insertItem(96);
    index = 0;
    while (index < object.getLength())
        {
        if (index!=object.getLength()-1) cout<<object.printSpecific(index) << ", ";
        else cout << object.printSpecific(index) << '\n';
        index++;
        }


        cout<<"List Length = "<<object.getLength()<<'\n';


        bool found;
        int toFind = 96;
        object.retreiveItem(toFind, found);
        if (found) cout<<"Item "<<toFind<<" is found"<<'\n';
        else cout<<"Item "<<toFind<<" is not found"<<'\n';



        toFind = -69;
        object.retreiveItem(toFind, found);
        if (found) cout<<"Item "<<toFind<<" is found"<<'\n';
        else cout<<"Item "<<toFind<<" is not found"<<'\n';


        object.deleteItem(25);
           index = 0;
        while (index < object.getLength())
        {
        if (index!=object.getLength()-1) cout<<object.printSpecific(index) << ", ";
        else cout << object.printSpecific(index) << '\n';
        index++;
        }


        object.makeEmpty();
        if (object.getLength()==0) cout<<"List is not Full"<<'\n';


}

