#include <iostream>

struct Node
{
	int data;
	Node* next;
};

Node * reverse(Node * head)
{
	if (head != nullptr)
	{
		Node * cur = nullptr;
		Node * prev = nullptr;
		Node * next = nullptr;

		cur = head;
		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		head = prev;
	}
}
