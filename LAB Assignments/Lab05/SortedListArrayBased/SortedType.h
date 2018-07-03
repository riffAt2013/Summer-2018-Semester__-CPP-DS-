
#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#define MAX_ITEMS 5

template<class ItemType>
class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull() const;
    int LengthIs() const;
    void RetrieveItem(ItemType& item, bool&
                      found);
    void InsertItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    bool IsLastItem();
    void GetNextItem(ItemType& item);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif
