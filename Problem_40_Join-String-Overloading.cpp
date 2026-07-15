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
string joinString(string arrString[], int size, string delim)
{
	string str = "";
	for (int i = 0; i < size; i++)
	{
		str += arrString[i] + delim;
	}
	return str.substr(0, str.length() - delim.length());
}

int main()
{
	vector<string>vString = { "OMAR","SHADI","ALMASHAQBEH" };
	string arrString[3] = { "OMAR","SHADI","ALMASHAQBEH" };
	cout << "Vector after join:\n" << joinString(vString, " ") << endl;
	cout << "\nArray after join:\n" << joinString(arrString, 3, " ") << endl;
	return 0;
}