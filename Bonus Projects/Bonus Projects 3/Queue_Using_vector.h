#pragma once
#include <vector>
class QueueUsingVector{
	public:
		QueueUsingVector();


		bool isEmpty();
		bool isFull();

		/*
		Empty the Queue.
		If the Queue can be made
		empty, return true.
		Otherwise, return false
		*/
		bool makeEmpty();

		/*
		Enqueue an integer value
		in the Queue.
		if you can enqueue a value
		in the Queue, return true.
		Otherwise, return false
		*/
		bool enqueue(int value);


		/*
		Dequeue an integer value
		from the Queue. if you can
		dequeue a value from the Queue,
		return true. In this case,
		the value dequeued will be inside value.
		Otherwise, return false.
		In this case, the contents
		of value will be invalid.
		*/
		bool dequeue(int& value);

		/*
		Return true if there is
		any front item in the queue.
		In this case, return the
		front item in value from the queue.
		Otherwise, return false.
		In this case, the contents
		of value will be invalid.
		*/
		bool front(int& value);

		//Returns the current size
		//(number of items) in the queue.
		int size();

	private:
        std::vector <int> que;
        int mySize;
};

