#include <iostream>
#include <string>
#include <cctype>

using namespace std;

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
int countLetter(string str, char ch)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string str = readString("Enter your string");
	char ch = readChar("\nEnter a character\n");
	cout << "Letter \'" << ch << "\' count = " << countLetter(str, ch) << endl;
	return 0;
}