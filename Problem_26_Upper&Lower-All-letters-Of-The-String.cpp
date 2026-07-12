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
string upperAllString(string str)
{
	int length = str.length();
	for (char& i : str)
	{
		i = toupper(i);
	}
	return str;
}
string lowerAllString(string str)
{
	int length = str.length();
	for (char& i : str)
	{
		i = tolower(i);
	}
	return str;
}

int main()
{
	string str = readString("Enter your string");
	str = upperAllString(str);
	cout << "\nString after Upper:\n" << str << endl;
	str = lowerAllString(str);
	cout << "\nString after Lower:\n" << str << endl;
	return 0;
}