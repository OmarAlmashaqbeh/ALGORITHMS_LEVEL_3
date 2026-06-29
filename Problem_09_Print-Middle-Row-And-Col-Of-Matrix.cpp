#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int getRandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillMatrixRandomly(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = getRandomNumber(1, 10);
		}
	}
}
void printMatrix(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
void printMiddleRowOfMatrix(int arr[3][3], int rows, int cols)
{
	int middleRow = rows / 2;
	for (int i = 0; i < cols; i++)
	{
		printf(" %0*d ", 2, arr[middleRow][i]);
	}
}
void printMiddleColOfMatrix(int arr[3][3], int rows, int cols)
{
	int middleCol = cols / 2;
	for (int i = 0; i < rows; i++)
	{
		printf(" %0*d ", 2, arr[i][middleCol]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillMatrixRandomly(arr, 3, 3);
	cout << "Matrix1\n";
	printMatrix(arr, 3, 3);
	cout << "\nMiddle Row of Matrix1 is:\n";
	printMiddleRowOfMatrix(arr, 3, 3);
	cout << "\n\nMiddle Col of Matrix1 is:\n";
	printMiddleColOfMatrix(arr, 3, 3);
	return 0;
}