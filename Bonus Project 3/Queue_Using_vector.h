#pragma once
#include <vector>
class QueueUsingVector{
	public:
		QueueUsingVector();
		bool isEmpty();
		bool makeEmpty(); 		
		bool enqueue(int value);
		bool dequeue(int& value);
		bool front(int& value);
		int size();
	
	private:
        std::vector <int> que;
};

