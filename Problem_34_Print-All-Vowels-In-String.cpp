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
bool isVowel(char ch)
{
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		return true;
	}
	return false;
}
void printVowels(string str)
{
	cout << "Vowels in string are: ";
	for (int i = 0; i < str.length(); i++)
	{
		if (isVowel(str[i]))
		{
			cout << str[i] << "  ";
		}
	}
	cout << endl;
}

int main()
{
	string str = readString("Enter your string");
	printVowels(str);
	return 0;
}