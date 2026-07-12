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
string lowerFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (isFirstLetter && str[i] != ' ')
		{
			str[i] = tolower(str[i]);
		}
		isFirstLetter = (str[i] == ' ');
	}
	return str;
}

int main()
{
	string str = readString("Enter your string");
	str = lowerFirstLetterOfEachWord(str);
	cout << "\nString after conversion:\n" << str << endl;
	return 0;
}