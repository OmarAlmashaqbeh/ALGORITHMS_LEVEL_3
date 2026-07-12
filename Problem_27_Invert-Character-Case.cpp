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
char invertLetterCase(char ch)
{
	return isupper(ch) ? tolower(ch) : toupper(ch);
}

int main()
{
	char ch = readChar("Enter a Character\n");
	ch = invertLetterCase(ch);
	cout << "\nChar after inverting case:\n" << ch << endl;
	return 0;
}