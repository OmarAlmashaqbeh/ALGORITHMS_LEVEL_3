#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int readNumber(string text)
{
	int num;
	cout << text;
	cin >> num;
	return num;
}
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

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	fillMatrixRandomly(matrix, 3, 3);
	cout << "Matrix1:\n";
	printMatrix(matrix, 3, 3);
	int num = readNumber("\nEnter the number to count in matrix ? ");
	cout << "\nNumber " << num << " count in matrix is " << countNumberInMatrix(matrix, num, 3, 3) << endl;;
	return 0;
}