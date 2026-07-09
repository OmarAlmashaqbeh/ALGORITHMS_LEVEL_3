#include <iostream>
#include <cstdlib>
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
			matrix[i][j] = getRandomNumber(1, 10);
		}
	}
}
void printMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf(" %0*d ", 2, matrix[i][j]);
		}
		cout << "\n";
	}
}
bool areTypicalMatrices(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix1[i][j] != matrix2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix1[3][3];
	int matrix2[3][3];
	fillMatrixRandomly(matrix1, 3, 3);
	cout << "Matrix1:\n";
	printMatrix(matrix1, 3, 3);
	fillMatrixRandomly(matrix2, 3, 3);
	cout << "\n\nMatrix2:\n";
	printMatrix(matrix2, 3, 3);
	if (areTypicalMatrices(matrix1, matrix2, 3, 3))
	{
		cout << "\nYES: both martices are typical." << endl;
	}
	else
	{
		cout << "\nNo: martices are NOT typical." << endl;
	}
	return 0;
}