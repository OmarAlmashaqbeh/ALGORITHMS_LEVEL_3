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
string upperFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (isFirstLetter && str[i] != ' ')
		{
			str[i] = toupper(str[i]);
		}
		isFirstLetter = (str[i] == ' ');
	}
	return str;
}

int main()
{
	string str = readString("Enter your string");
	str = upperFirstLetterOfEachWord(str);
	cout << "\nString after conversion:\n" << str << endl;
	return 0;
}