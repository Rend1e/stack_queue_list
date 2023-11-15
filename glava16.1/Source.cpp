#include <iostream>
#include <fstream>
#include <sstream>
#include "stack.cpp"
#include "queue.cpp"
#include "list.cpp"

using namespace std;

int main() {
	queue<int> t1;
	stack<int> t;
	list<int> t2;
	int i, x, y;

	ifstream f1;
	f1.open("input.txt");
	f1 >> x;
	f1 >> y;
	ofstream f2;
	f2.open("output.txt");

	while (f1 >> i)
	{
		
		t.push(i);
		t1.put(i);
		t2.insert(t2.getlength() + 1, i);
		
		//cout << t2.getlength()+1;
		//cout << t.top();
	}
	f1.close();

	while (!t.empty())
	{
		//cout << "while";
		if (t.pop() < 0)
		{
			f2 << t.pop() << " ";
		}
	}
	f2 << endl;
	while (!t1.empty())
	{
		//cout << "while1";
		if (t1.get() < 0)
		{
			f2 << t1.get() << " ";
		}
	}
	f2 << endl;
	t2.print();
	f2.close();

	return 0;
}