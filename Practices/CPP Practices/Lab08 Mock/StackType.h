
#pragma once
#define MAX_ITEMS 5

class StackType
{

private:
    int top;
    int info[MAX_ITEMS];


public:
    StackType();
    bool isFull() const;
    bool isEmpty() const;
    void push(int);
    void pop();
    int Top() const;
    int getTop() const;
};
