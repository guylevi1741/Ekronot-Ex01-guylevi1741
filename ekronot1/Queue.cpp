#include "Queue.h"
/*
this function init the queue 
input:queue pointer, and the size
output:none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->count = 0;
	q->maxSize = size;
	q->elements = new int[size];
}
/*
this function cleans the Queue
input:the queue 
output:none
*/
void cleanQueue(Queue* q)
{
	delete[] q->elements;
	//i dont know if this is required or not..
	q->elements = nullptr;

	q->maxSize = 0;
	q->count = 0;
}
/*
this functions add an item ot the queue
input:the queue and the new value
output:none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->elements[q->count] = newValue;
		q->count++;
	}

}
/*
this function returns the top item in the queue and removes it
input:the queue
output: the last item 
*/
int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}
	int value = q->elements[0];

	for (int i = 0; i < q->count - 1; i++)
	{
		q->elements[i] = q->elements[i + 1];
	}
	q->count--;
	return value;
}
/*
this function checks if the queue is empty
input:the queue
output:true if empty false else
*/
bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	return false;

}
/*
checks if the queue is full
input:the queue
output:true if full false else
*/
bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	return false;

}
