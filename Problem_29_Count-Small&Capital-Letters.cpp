#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readString(string text)
{
	string str;
	cout << text << endl;
	getline(cin, str);
	return str;
}
int countCapitalLetters(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			count++;
		}
	}
	return count;
}
int countSmallLetters(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (islower(str[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string str = readString("Enter your string");
	cout << "String length = " << str.length() << endl;
	cout << "Capital letters count = " << countCapitalLetters(str) << endl;
	cout << "Small letters count = " << countSmallLetters(str) << endl;
	return 0;
}