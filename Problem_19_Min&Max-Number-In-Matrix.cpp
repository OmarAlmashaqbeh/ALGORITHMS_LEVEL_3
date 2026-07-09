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
int maxNumberInMatrix(int matrix[3][3], int rows, int cols)
{
	int max = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}
int minNumberInMatrix(int matrix[3][3], int rows, int cols)
{
	int min = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
		}
	}
	return min;
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "Matrix1:\n";
	printMatrix(matrix, 3, 3);
	cout << "\nMaximum number is: " << maxNumberInMatrix(matrix, 3, 3) << endl;
	cout << "\nMinimum number is: " << minNumberInMatrix(matrix, 3, 3) << endl;
	return 0;
}