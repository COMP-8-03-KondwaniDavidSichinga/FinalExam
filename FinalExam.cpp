#include <iostream>
#include <cassert>
using namespace std;

void EnterMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2);
void SumMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2);
void ShowMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2);




//Here the user is prompted to input data that is between -2.5 and 2.5 using 2 for loops
//the data is validated using a while loop to ensure the data entred is between -2.5 and 2.5
void EnterMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			cin >> matrix[i][j];
		}

		cout << endl;
	}
	;
}

void SumMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2)
{
	double sum = 0;

	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			sum +=  matrix[i][j];
		}

		cout << endl;
	}
	;
}


//Here the function for Show Matrix data is implemented using a for loop within a for loop
//the final matrix is printed for the user to see

void ShowMatrixData(double matrix[4][3], const int SIZE1, const int SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			cout << matrix[SIZE1][SIZE2] << " ";
		}

		cout << endl;
	}
	;
}