#include <iostream>
#include <vector>
#include <string>

using namespace std;

string readString(string text)
{
	string str;
	cout << text << endl;
	getline(cin, str);
	return str;
}
vector<string> splitString(string str, string delim)
{
	vector<string>vString;
	string word = "";
	int pos = 0;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			vString.push_back(word);
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vString.push_back(str);
	}
	return vString;
}

int main()
{
	vector<string>vString = splitString(readString("Enter your string"), " ");
	cout << "\nTokens = " << vString.size() << endl;
	for (string& i : vString)
	{
		cout << i << endl;
	}
	return 0;
}