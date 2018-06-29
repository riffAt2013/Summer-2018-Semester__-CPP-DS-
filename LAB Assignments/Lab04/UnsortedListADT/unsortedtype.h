
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;    //fixed size by the teacher 

template <class ItemType>
class unsortedtype {

public:
    unsortedtype();

bool isFull() const;
   int getLength() const;
    void makeEmpty();
    void insertItem (ItemType);
    void deleteItem(ItemType);
    void retreiveItem (ItemType, bool&);
    void resetList();
    void getNextItem(ItemType&);
    ItemType printSpecific(int);

private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif // UNSORTED_H_INCLUDED

