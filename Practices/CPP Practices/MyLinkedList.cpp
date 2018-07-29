
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
    int size;

public:
    LinkedList ()
    {
        listData = NULL;
        currentPosition = NULL;
        size = 0;

    }
    LinkedList (int n)
    {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;

        temp = listData;
        temp = currentPosition;
        size =1;
    }

    void add(int n)
    {
        size++;
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

    int getS()
    {
        return size;
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

    void del (int d)
    {
        Node* temp;
        temp = listData;

        if (temp==NULL) return;
        while (temp->next!=NULL)
        {
            if (temp->next->data==d)
            {
                Node*temp1 = temp->next;
                temp->next = temp1->next;
                delete temp1;
            }
            else {temp=temp->next;}
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

        a.del (13);

        a.dispRec (a.get());

//        cout<<'\n';cout<<a.getS();

        return 0;
    }
