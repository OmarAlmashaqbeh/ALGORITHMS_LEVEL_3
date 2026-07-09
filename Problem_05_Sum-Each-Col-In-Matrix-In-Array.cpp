#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int getRandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillMatrixRandomly(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = getRandomNumber(1, 100);
		}
	}
}
void printMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
}
int colSum(int matrix[3][3], int colNumber, int rows)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		sum += matrix[i][colNumber];
	}
	return sum;
}
void sumMatixColsInArry(int matrix[3][3], int arrSum[3], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arrSum[i] = colSum(matrix, i, rows);
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
	int matrix[3][3];
	int arrSum[3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(matrix, 3, 3);
	sumMatixColsInArry(matrix, arrSum, 3, 3);
	printColsSumInArray(arrSum, 3);
	return 0;
}