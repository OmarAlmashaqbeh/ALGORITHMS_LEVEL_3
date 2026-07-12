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
void printFibonacciUsingRecursion(int size, int prev1, int prev2)
{
	int fib = 0;
	if (size > 0)
	{
		fib = prev2 + prev1;
		prev2 = prev1;
		prev1 = fib;
		cout << setw(4) << fib;
		printFibonacciUsingRecursion(size - 1, prev1, prev2);
	}
}

int main()
{
	printFibonacciUsingRecursion(readNumber("Enter the length "), 0, 1);
	return 0;
}