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
void printMiddleRowOfMatrix(int matrix[3][3], int rows, int cols)
{
	int middleRow = rows / 2;
	for (int i = 0; i < cols; i++)
	{
		printf(" %0*d ", 2, matrix[middleRow][i]);
	}
}
void printMiddleColOfMatrix(int matrix[3][3], int rows, int cols)
{
	int middleCol = cols / 2;
	for (int i = 0; i < rows; i++)
	{
		printf(" %0*d ", 2, matrix[i][middleCol]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "Matrix1\n";
	printMatrix(matrix, 3, 3);
	cout << "\nMiddle Row of Matrix1 is:\n";
	printMiddleRowOfMatrix(matrix, 3, 3);
	cout << "\n\nMiddle Col of Matrix1 is:\n";
	printMiddleColOfMatrix(matrix, 3, 3);
	return 0;
}