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
bool isVowel(char ch)
{
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		return true;
	}
	return false;
}

int main()
{
	char ch = readChar("\nEnter a character\n");
	if (isVowel(ch))
	{
		cout << "\nYES Letter \'" << ch << "\' is vowel" << endl;
	}
	else
	{
		cout << "\nYES Letter \'" << ch << "\' is NOT vowel" << endl;
	}
	return 0;
}