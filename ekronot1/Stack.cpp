#include "Stack.h"
/*
this function inserts a node to the stack
input:the stack and the element
output:none
*/
void push(Stack* s, unsigned int element)
{
	insert(s->list, element);
}
/*
this function removes a node and returns it 
input:the stack
output:the node (int value) 
*/
int pop(Stack* s)
{
	if(s->list==nullptr)
	{
		return -1;
	}

	int value = s->list->tail->value;
	removeFromFront(s->list);
	return value;
}
/*
this function init a stack
input:the stack
output:none
*/
void initStack(Stack* s)
{
	s->list = new LinkedList;
	initList(s->list);
}
/*
this function cleans the stack
input:the stack
output:none
*/
void cleanStack(Stack* s)

{
	if(s!=nullptr)
	{
		cleanList(s->list);
		delete s->list;
	}
}
/*
this function checks if the stack is full.. which it cannot so it returns only one value
input: the stack
output:false
*/
bool isFull(Stack* s)
{
	//??? what ??? 
	return false;
}
/*
this function checks if the stack is empty
input:the stack
output:true if empty false if not
*/
bool isEmpty(Stack* s)
{
	if(s!=nullptr)
	{
		return s->list->count == 0; 
	}
}