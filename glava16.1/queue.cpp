#pragma once
#include "QueueExpection.cpp"
template <class Item>

class queue {
	struct element
	{
		int inf;
		element* next;
		element(int x) : inf(x), next(0)
		{}
	};
	element* head, * tail;//ukazatel na verhshinu
public:
	queue() : head(0), tail(0)
	{}
	bool empty() //proverka na pustotu
	{
		return head == 0;
	}
	int get()
	{
		if (empty())
		{
			throw QueueExpection("QueueException: get - queue empty");
		}
		else
		{
			element* t = head;
			int i = t->inf;
			head = t->next;
			if (head == NULL)
			{
				tail = NULL;
			}
			delete t;
			return i;
		}
	}
	void put(Item data)
	{
		element* t = tail;
		tail = new element(data);
		if (!head)
		{
			head = tail;
		}
		else
		{
			t->next = tail;
		}
	}

};