
#include <iostream>
#include "stacktype.h"

template class StackType<int>;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        return 0;
    return topPtr->info;
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(std::bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        return;

    NodeType* location;
    location = new NodeType;
    location->info = newItem;
    location->next = topPtr;
    topPtr = location;

}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        return;

    NodeType* temp;
    temp = topPtr;
    topPtr = topPtr->next;
    delete temp;

}
template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
void StackType<ItemType>::printlist()
{

    NodeType* temp;

    temp = topPtr;
    while (temp!=NULL)
    {
        std::cout<<temp->info<<" ";
        temp = temp->next;
    }
    std::cout<<'\n';
}

template <class ItemType>
void StackType<ItemType>::ReplaceItem(int oldItem, int newItem)
{
    NodeType* temp;
    temp = topPtr;

    while (temp!=NULL)
    {
        if (temp->info==oldItem)
            oldItem = newItem;

        temp = temp->next;
    }
}


