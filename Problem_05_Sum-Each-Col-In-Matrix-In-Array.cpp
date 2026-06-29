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
			arr[i][j] = getRandomNumber(1, 100);
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
int colSum(int arr[3][3], int colNumber, int rows)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		sum += arr[i][colNumber];
	}
	return sum;
}
void sumMatixColsInArry(int arr[3][3], int arrSum[3], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arrSum[i] = colSum(arr, i, rows);
	}
}
void printColsSumInArray(int arrSum[], int cols)
{
	cout << "\nThe following are the sum of each col in the matrix:\n";
	for (int i = 0; i < cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrSum[3];
	fillMatrixRandomly(arr, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(arr, 3, 3);
	sumMatixColsInArry(arr, arrSum, 3, 3);
	printColsSumInArray(arrSum, 3);
	return 0;
}