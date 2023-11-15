#include "listexpection.cpp"
#include <iostream>
#include <fstream>

using namespace std;
template <class Item>


class list
{
	struct element
	{
		int inf;
		element* next;
		element(int x) : inf(x), next(0)
		{}
	};
	element* head;
int size;
element* find(int index)
{
	if ((index < 1) || (index > size))
	{
		return NULL;
	}
	else
	{
		element* cur = head;
		for (int i = 1; i < index; i++)
		{
			cur = cur->next;
		}
		return cur;
	}
}
public:
	list() : head(0), size(0)
	{}
	~list()
	{
		while (!empty())
		{
			remove(1);
		}
	}
	bool empty()
	{
		return head == 0;
	}
	int getlength()
	{
		return size;
	}
	int get(int index)
	{
		if ((index < 1) || (index > size))
		{
			throw listexpection("ListExpection: insert - list error");
		}
		else
		{
			element* r = find(index);
			int i = r->inf;
			return i;
		}
	}
	void insert(int index, int data)
	{
		if ((index < 1) && (index > size))
		{
			//cout << size;
			throw listexpection("ListExpection: insert - list error");
		}
		else
		{
			element* newptr = new element(data);
			size = getlength() + 1;
			if (index == 1)
			{
				newptr->next = head;
				head = newptr;
			}
			else
			{
				element* prev = find(index - 1);
				newptr->next = prev->next;
				prev->next = newptr;
			}
		}
	}
	void remove(int index)
	{
		if ((index < 1) || (index > size))
		{
			throw listexpection("ListExpection: insert - list error");
		}
		else
		{
			element* cur;
			--size;
			if (index == 1)
			{
				cur = head;
				head = head->next;
			}
			else
			{
				element* prev = find(index - 1);
				cur = prev->next;
				prev->next = cur->next;
			}
			cur->next = NULL;
			delete cur;
		}
	}
	void print()
	{
		ofstream f2;
		f2.open("output.txt", ios::app);


		for (element* cur = head; cur != NULL; cur = cur->next)
		{
			//if (atoi(cur->inf) < 0) {
				//f2 << cur->inf << " ";
				//cout << cur->inf;
			//}
		
		}
	}
};