#include <string>

using namespace std;

class QueueExpection
{
private:
	string str;
public:
	QueueExpection(string message) : str(message)
	{}
	string what()
	{
		return str;
	}
};