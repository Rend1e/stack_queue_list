#include <string>

using namespace std;

class stackExpection
{
private:
	string str;
public:
	stackExpection(string message) : str(message)
	{}
	string what()
	{
		return str;
	}
};