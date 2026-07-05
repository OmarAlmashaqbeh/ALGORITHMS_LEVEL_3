#include <iostream>
#include <iomanip>

using namespace std;

void fillMatrixWithOrderedNumbers(int arr[3][3], int rows, int cols)
{
	int count = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = count++;
		}
	}
}
void printMatrix(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}
void transposeMatrix(int arr[3][3], int arrTransposed[3][3], int rows, int cols)
{
	cout << "\n\nThe following is the transposed matrix:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrTransposed[i][j] = arr[j][i];
		}
	}
}

int main()
{
	int arr[3][3];
	int arrTransposed[3][3];
	fillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(arr, 3, 3);
	transposeMatrix(arr, arrTransposed, 3, 3);
	printMatrix(arrTransposed, 3, 3);
	return 0;
}