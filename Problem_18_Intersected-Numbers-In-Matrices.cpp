#include <iostream>
#include <iomanip>
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
			printf(" %0*d ", 2, matrix[i][j]);
		}
		cout << "\n";
	}
}
bool isNumberInMatrix(int matrix[3][3], int num, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == num)
			{
				return true;
			}
		}
	}
	return false;
}
void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (isNumberInMatrix(matrix2, matrix1[i][j], rows, cols))
			{
				cout << setw(2) << matrix1[i][j] << "  ";
			}
		}
	}
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
	cout << "Matrix2:\n";
	printMatrix(matrix2, 3, 3);
	cout << "\nIntersected Numbers are:\n";
	printIntersectedNumbers(matrix1, matrix2, 3, 3);
	return 0;
}