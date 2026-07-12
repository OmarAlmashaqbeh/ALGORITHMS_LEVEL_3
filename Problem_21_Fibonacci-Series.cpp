#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int readNumber(string text)
{
	int num;
	cout << text;
	cin >> num;
	return num;
}
void printFibonacci(int size)
{
	int prev2 = 0, prev1 = 1;
	for (int i = 0; i < size; i++)
	{
		int fib = prev2 + prev1;
		cout << setw(4) << fib;
		prev2 = prev1;
		prev1 = fib;
	}
}

int main()
{
	printFibonacci(readNumber("Enter the length "));
	return 0;
}