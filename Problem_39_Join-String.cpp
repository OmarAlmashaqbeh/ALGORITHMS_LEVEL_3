#include <iostream>
#include <vector>

using namespace std;

string joinString(vector<string> vString, string delim)
{
	string str = "";
	for (string& i : vString)
	{
		str += i + delim;
	}
	return str.substr(0, str.length() - delim.length());
}

int main()
{
	vector<string>vString = { "OMAR","SHADI","ALMASHAQBEH" };
	cout << "Vector after join:\n" << joinString(vString, " ") << endl;
	return 0;
}