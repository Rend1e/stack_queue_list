#include <string>

using namespace std;

class listexpection
{
private:
	string str;
public:
	listexpection(string message) : str(message)
	{}
	string what()
	{
		return str;
	}
};