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
			cout << setw(3) << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}
void multiplyTwoMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr3[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	fillMatrixRandomly(arr1, 3, 3);
	cout << "Matrix1\n";
	printMatrix(arr1, 3, 3);
	fillMatrixRandomly(arr2, 3, 3);
	cout << "\nMatrix2\n";
	printMatrix(arr2, 3, 3);
	multiplyTwoMatrix(arr1, arr2, arr3, 3, 3);
	cout << "\nResults:\n";
	printMatrix(arr3, 3, 3);
	return 0;
}