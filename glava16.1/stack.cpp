#pragma once
#include "expection.cpp"
template <class Item>

class stack
{
	struct element
	{
		int inf;
		element* next;
		element(int x, element* p) : inf(x), next(p)
		{}
	};
	element* head;//ukazatel na verhshinu
public:
	stack() : head(0)
	{}
	bool empty() //proverka na pustotu
	{
		return head == 0;
	}
	int pop() //vzyat element so stecka
	{
		if (empty())
		{
			return 0;
		}
		else
		{
			element* r = head;
			int i = r->inf;
			head = r->next;
			delete r;
			return i;
		}		
	}
	void push(int data)
	{
		head = new element(data, head);
	}
	int top()
	{
		if (empty())
		{
			return 0;
		}
		else
		{
			return head->inf;
		}
	}
};


