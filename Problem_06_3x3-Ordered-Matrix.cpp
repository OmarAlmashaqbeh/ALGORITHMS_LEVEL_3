#include <iostream>
#include <iomanip>

using namespace std;

void fillMatrixWithOrderedNumbers(int matrix[3][3], int rows, int cols)
{
	int count = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = count++;
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

int main()
{
	int matrix[3][3];
	fillMatrixWithOrderedNumbers(matrix, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(matrix, 3, 3);
	return 0;
}