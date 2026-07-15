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
int countWordsInString(string str)
{
	string word = "", delim = " ";
	int count = 0, pos = 0;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			count++;
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		count++;
	}
	return count;
}

int main()
{
	string str = readString("Enter your string");
	cout << "\nThe number of words in your string is: " << countWordsInString(str) << endl;
	return 0;
}