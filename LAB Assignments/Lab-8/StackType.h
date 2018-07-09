#pragma once

const int MAX_ITEMS = 5;

template <class ItemType>
class StackType
{
public:
    StackType();
    bool IsFull() const;
    bool IsEmpty() const;
    void Push(ItemType);
    void Pop();
    ItemType Top() const;
    void Print();

private:
    int top;
    ItemType items[MAX_ITEMS];
};
