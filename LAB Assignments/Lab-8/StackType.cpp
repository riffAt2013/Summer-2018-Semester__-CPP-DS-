#include<iostream>
#include "StackType.h"
using namespace std;


template class StackType<int>;

template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top ==  MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        return;
    top++;
    items[top] = newItem;
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        return;
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        return 0;

    return items[top];

}
template<class ItemType>
void StackType<ItemType>::Print()
{
    int tempTop = top;

    for (int i=tempTop; i>=0; i--)
    {
        cout<<items[i]<<" ";
    }
}
