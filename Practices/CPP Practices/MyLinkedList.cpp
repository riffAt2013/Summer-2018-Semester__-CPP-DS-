
#include <iostream>
using namespace std;


struct Node
{
    Node *next;
    int data;
};

class LinkedList{
private :
    Node *listData, *currentPosition;

public:
    LinkedList ()
    {
        listData = NULL;
        currentPosition = NULL;
    }
    LinkedList (int n)
    {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;

        temp = listData;
        temp = currentPosition;
    }

    void add(int n)
    {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;

        if (listData==NULL)
        {
            listData = temp;
            currentPosition = temp;
        }
        else
        {
            currentPosition->next = temp;
            currentPosition = temp;     //cP = cP->next
        }
    }

    void disp()
    {
            Node *temp;
            temp = listData;

            while (temp!=NULL)
            {
                cout<<temp->data<<"  ";
                temp = temp->next;
            }
    }

    Node* get()
    {
        return listData;
    }

    void dispRec (Node* listData)
    {
        if (listData == NULL)
            return;
        else {
            cout<<listData->data<<" ";
            dispRec (listData->next);
        }

    }

};


 int main()
    {
        LinkedList a;
        a.add(11);
        a.add(12);
        a.add(13);
        a.add(12);
        a.add(-89);
        a.add(123213);
        a.add(123);
        a.add(14214213);
        a.add(3313);

        a.dispRec (a.get());
        return 0;
    }
