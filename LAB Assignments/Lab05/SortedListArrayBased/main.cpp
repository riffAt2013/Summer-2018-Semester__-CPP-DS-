    #include <iostream>
    #include "SortedType.h"
    #define N '\n';
    bool isFound;

    using namespace std;

    int main()
    {
        SortedType<int> object;
        cout<<"Length is: "<<object.LengthIs()<<N;

        object.InsertItem(5);
        object.InsertItem(7);
        object.InsertItem(4);
        object.InsertItem(2);
        object.InsertItem(1);

        object.ResetList();

        int i=0;
        while (true)
        {
            int temp;
            object.GetNextItem(temp);
            cout<<temp<<" ";
            i++;
            if (i==object.LengthIs())
            {
                cout<<N;
                break;
            }
        }


        int toFind = 6;
        object.RetrieveItem(toFind, isFound);
        if (isFound) cout<<"Item is found"<<N  //shouldn't there be a semicolon, its working fine w/o it, not working otherwise
        else cout<<"item is not found"<<N;


        toFind = 5;
        object.RetrieveItem(toFind, isFound);
        if (isFound) cout<<"Item is found"<<N
        else cout<<"item is not not found"<<N;


        if (object.IsFull()) cout<<"List is full";
        else cout<<"List is not Full";

        return 0;
    }
