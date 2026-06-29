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
int rowSum(int arr[3][3], int rowNumber, int cols)
{
	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		sum += arr[rowNumber][i];
	}
	return sum;
}
void sumMatixRowsInArry(int arr[3][3], int arrSum[3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		arrSum[i] = rowSum(arr, i, cols);
	}
}
void printRowsSumInArray(int arrSum[], int rows)
{
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;
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
	sumMatixRowsInArry(arr, arrSum, 3, 3);
	printRowsSumInArray(arrSum, 3);
	return 0;
}