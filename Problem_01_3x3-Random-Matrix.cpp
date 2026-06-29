#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int getRandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillMatrixRandomly(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = getRandomNumber(1, 100);
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

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillMatrixRandomly(arr, 3, 3);
	cout << "The following is a 3x3 random matrix:\n";
	printMatrix(arr, 3, 3);
	return 0;
}