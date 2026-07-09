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
int rowSum(int matrix[3][3], int rowNumber, int cols)
{
	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		sum += matrix[rowNumber][i];
	}
	return sum;
}
void sumMatixRowsInArry(int matrix[3][3], int matrixSum[3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		matrixSum[i] = rowSum(matrix, i, cols);
	}
}
void printRowsSumInArray(int matrixSum[], int rows)
{
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << matrixSum[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	int matrixSum[3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(matrix, 3, 3);
	sumMatixRowsInArry(matrix, matrixSum, 3, 3);
	printRowsSumInArray(matrixSum, 3);
	return 0;
}