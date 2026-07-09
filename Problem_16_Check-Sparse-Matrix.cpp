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
			matrix[i][j] = getRandomNumber(0, 5);
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
int countNumberInMatrix(int matrix[3][3], int num, int rows, int cols)
{
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == num)
			{
				count++;
			}
		}
	}
	return count;
}
bool isSparseMatrix(int matrix[3][3], int rows, int cols)
{
	int matrixSize = rows * cols;
	return countNumberInMatrix(matrix, 0, rows, cols) > (matrixSize / 2);
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "Matrix1:\n";
	printMatrix(matrix, 3, 3);
	if (isSparseMatrix(matrix, 3, 3))
	{
		cout << "\nYes: It is Sparse" << endl;
	}
	else
	{
		cout << "\nNo: It's NOT Sparse" << endl;
	}
	return 0;
}