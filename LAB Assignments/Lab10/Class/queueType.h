#pragma once

class FullQueue
{};
class EmptyQueue
{};
template<class ItemType> class queueType
{
public:
    queueType();
    queueType(int max);
    ~queueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void ReplaceItem (int, int);
    void printAll();
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};

