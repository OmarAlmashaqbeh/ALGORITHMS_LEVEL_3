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
char invertLetterCase(char ch)
{
	return isupper(ch) ? tolower(ch) : toupper(ch);
}
string invertAllStringLettersCase(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = invertLetterCase(str[i]);
	}
	return str;
}

int main()
{
	string str = readString("Enter your string");
	str = invertAllStringLettersCase(str);
	cout << "\nString after Inverting All Letters Case:\n" << str << endl;
	return 0;
}