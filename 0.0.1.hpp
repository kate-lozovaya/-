#include <iostream>

struct Node
{
	int data;
	Node* next;
};

Node * reverse(Node * head)
{
	Node * cur = head;
	Node * prev = nullptr;
	Node * next = nullptr;

	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}
