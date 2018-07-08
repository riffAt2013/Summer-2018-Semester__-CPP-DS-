#include "StackType.h"

StackType::StackType()
{
    top = -1;
}

bool StackType::isEmpty() const
{
    return (top==-1);
}

bool StackType::isFull() const
{
    return (top==MAX_ITEMS-1);
}

void StackType::push(int toPut)
{
    if (isFull())
        return;
    top++;
    info[top] = toPut;
}

void StackType::pop()
{
    if (isEmpty())
        return;
    top--;
}

int StackType::Top() const
{
    if (isEmpty())
        return 0;
    return info[top];
}

int StackType::getTop() const
{
    return top;
}
