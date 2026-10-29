#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->count = 0;
	q->maxSize = size;
	q->elements = new int[size];
}

void cleanQueue(Queue* q)
{
	delete[] q->elements;
	//i dont know if this is required or not..
	q->elements = nullptr;

	q->maxSize = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->elements[q->count] = newValue;
		q->count++;
	}

}

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

bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	return false;

}

bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	return false;

}
