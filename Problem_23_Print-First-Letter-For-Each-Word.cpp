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
void printFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;
	cout << "\nThe first letters of this string:\n";
	for (int i = 0; i < str.length(); i++)
	{
		if (isFirstLetter && str[i] != ' ')
		{
			cout << str[i] << "\n";
		}
		isFirstLetter = (str[i] == ' ');
	}
}

int main()
{
	printFirstLetterOfEachWord(readString("Enter your string"));
	return 0;
}