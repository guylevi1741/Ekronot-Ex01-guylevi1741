#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	int value;
	struct Node* next;
} Node;
typedef struct LinkedList {
	Node *head;
	int count;
} LinkedList;

void initList(LinkedList* list);
void insert(LinkedList* list,int value);
bool isEmpty(LinkedList* list);
void removeFromFront(LinkedList* list);
void cleanList(LinkedList* list);

#endif
