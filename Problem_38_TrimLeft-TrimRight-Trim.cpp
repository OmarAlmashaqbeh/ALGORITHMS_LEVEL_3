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
string trimLeft(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			return str.substr(i, str.length() - i);
		}
	}
	return "";
}
string trimRight(string str)
{
	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (str[i] != ' ')
		{
			return str.substr(0, i + 1);
		}
	}
	return "";
}
string trim(string str)
{
	return trimLeft(trimRight(str));
}

int main()
{
	string str = readString("Enter your string");
	cout << "\nTrim Left : \"" << trimLeft(str) << "\"" << endl;
	cout << "\nTrim Right: \"" << trimRight(str) << "\"" << endl;
	cout << "\nTrim      : \"" << trim(str) << "\"" << endl;
	return 0;
}