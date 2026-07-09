#include <iostream>

using namespace std;

void fillMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
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
bool isScalarMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j && matrix[i][j] != matrix[0][0])
			{
				return false;
			}
			else if (i != j && matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int matrix[3][3];
	fillMatrix(matrix, 3, 3);
	cout << "\nMatrix:\n";
	printMatrix(matrix, 3, 3);
	if (isScalarMatrix(matrix, 3, 3))
	{
		cout << "\nYES: Matrix is Scalar." << endl;
	}
	else
	{
		cout << "\nNo: Matrix is NOT Scalar." << endl;
	}
	return 0;
}