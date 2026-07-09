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
bool isPalindromeMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] != matrix[i][rows - j - 1])
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
	cout << "Matrix1:\n";
	printMatrix(matrix, 3, 3);
	if (isPalindromeMatrix(matrix, 3, 3))
	{
		cout << "\nYes: Matrix is Palindrome" << endl;
	}
	else
	{
		cout << "\nNo: Matrix is NOT Palindrome" << endl;
	}
	return 0;
}