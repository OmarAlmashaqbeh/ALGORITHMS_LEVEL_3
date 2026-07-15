#include <iostream>
#include <string>

using namespace std;

string readString(string text)
{
	string str;
	cout << text << endl;
	getline(cin, str);
	return str;
}
void printEachWordInString(string str)
{
	string word = "", delim = " ";
	int pos = 0;
	cout << "\nYour string wrords are:\n\n";
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			cout << word << endl;
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		cout << str << endl;
	}
}

int main()
{
	string str = readString("Enter your string");
	printEachWordInString(str);
	return 0;
}