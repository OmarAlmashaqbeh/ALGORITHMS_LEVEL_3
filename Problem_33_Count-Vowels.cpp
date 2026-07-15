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
int countVowels(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isVowel(str[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string str = readString("Enter your string");
	cout << "Number of vowels is: " << countVowels(str) << endl;
	return 0;
}