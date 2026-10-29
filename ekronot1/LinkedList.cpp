#include "LinkedList.h"

/*this function init the list
input:a linked list pointer
output:none*/
void initList(LinkedList* list)
{
	if (list != nullptr)
	{
		list->head = nullptr;
		list->tail = nullptr;
		list->count = 0;
	}
}

/*this fucntion removes from the last node
input:the linked list
output:none*/
void removeFromFront(LinkedList* list) {
	if (list != nullptr && !isEmpty(list)) {
		if (list->head->next == nullptr) {
			delete list->head;
			list->head = nullptr;
			list->tail = nullptr;
		}
		else {
			Node* current = list->head;
			while (current->next->next != nullptr) {
				current = current->next;
			}
			Node* temp = current->next;
			delete temp;
			current->next = nullptr;
			list->tail = current;
		}
		list->count--;
	}
}

/*this function cleans the list
input:the linked list
output:none*/
void cleanList(LinkedList* list)
{
	Node* current = list->head;
	while (current != nullptr) {
		Node* nextNode = current->next;
		delete current;
		current = nextNode;
	}

	list->head = nullptr;
	list->tail = nullptr;
	list->count = 0;
}

/*this function inserts to the linked list at the end
input:the list, the value to the new node
output:none*/
void insert(LinkedList* list, int value)
{
	Node* n = new Node;
	n->next = nullptr;
	n->value = value;

	if (isEmpty(list))
	{
		list->head = n;
		list->tail = n;
	}
	else
	{
		Node* current = list->head;

		while (current->next != nullptr)
		{
			current = current->next;
		}

		current->next = n;
		list->tail = n;
	}
	list->count++;
}

/*checks if the list is empty
input:the linke list
output:true if empty false else*/
bool isEmpty(LinkedList* list)
{
	return list->count == 0;
}