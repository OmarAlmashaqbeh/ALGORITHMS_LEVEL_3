#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum enMatchCase { matchCase = 1, ignoreCase = 2 };

char readChar(string text)
{
	char ch;
	cout << text;
	cin >> ch;
	return ch;
}
string readString(string text)
{
	string str;
	cout << text << endl;
	getline(cin, str);
	return str;
}
char invertLetterCase(char ch)
{
	return isupper(ch) ? tolower(ch) : toupper(ch);
}
int countLetter(string str, char ch, enMatchCase matchCase)
{
	int count = 0;
	if (matchCase == enMatchCase::matchCase)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ch)
			{
				count++;
			}
		}
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ch || str[i] == invertLetterCase(ch))
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	string str = readString("Enter your string");
	char ch = readChar("\nEnter a character\n");
	cout << "Letter \'" << ch << "\' count = " << countLetter(str, ch, matchCase) << endl;
	cout << "Letter \'" << ch << "\' OR \'" << invertLetterCase(ch) << "\' count = " << countLetter(str, ch, ignoreCase) << endl;
	return 0;
}