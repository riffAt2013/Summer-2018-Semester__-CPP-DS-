#pragma once
#include <stack>

class QueueUsingStacks{
	public:
		QueueUsingStacks();
		~QueueUsingStacks();
		bool isFull();
		bool isEmpty();
        bool makeEmpty();
        bool enqueue(int value);
        bool dequeue(int& value);
		bool front(int& value);
		int size();

	private:
	    std::stack <int> orgStack;
	    std::stack <int> revStack;
	    int sizeOfStack;
};

