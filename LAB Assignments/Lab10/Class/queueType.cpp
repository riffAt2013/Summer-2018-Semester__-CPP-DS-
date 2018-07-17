#include<iostream>
#include "queueType.h"

using namespace std;

template class queueType<int>;
template<class ItemType>
queueType<ItemType>::queueType(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}
template<class ItemType>
queueType<ItemType>::queueType()
{
    maxQue = 5;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
queueType<ItemType>::~queueType()
{
    delete [] items;
}
template<class ItemType>
void queueType<ItemType>::MakeEmpty()
{
    front = maxQue - 1;
    rear = maxQue - 1;
}
template<class ItemType>
bool queueType<ItemType>::IsEmpty()
{
    if(front==rear)
        return true;
    else
        return false;
}
template<class ItemType>
bool queueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue == front);
}
template<class ItemType>
void queueType<ItemType>::Enqueue(ItemType newItem)
{

    if(IsEmpty())
    {
        items[rear]=newItem;
        rear++;
    }
    else
    {
        if(IsFull())
            throw FullQueue();
        else
        {
            items[rear]=newItem;
            if(rear>maxQue)
                rear=0;
            rear++;
        }
    }
}
template<class ItemType>
void queueType<ItemType>::Dequeue(ItemType& item)
{
    item=items[front];
    if(front>maxQue)
        front=0;
    if(front==rear)
        throw EmptyQueue();
    else
        front++;

}
template<class ItemType>
void queueType<ItemType>::printAll()
{
    int temp=front;
    for(;temp!=rear; temp++)
    {
        cout<<items[temp]<<" ";
        if(temp>maxQue)
        {
            temp=0;
        }
    }
}

template<class ItemType>
void queueType<ItemType>::ReplaceItem(int oldItem,int newItem)
{

    int temp= front;
    while(temp!=rear)
    {
        if(items[temp]==oldItem)
            items[temp]=newItem;
        if(temp>maxQue)
        {
            temp=0;
        }
        temp++;

    }

}
