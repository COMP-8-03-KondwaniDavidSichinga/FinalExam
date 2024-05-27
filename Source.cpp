
//Write a C++ program (name it final Exam) that you hist un Your Organization within Github
// Manipulate a matrix of doubles, with dimensions 4 x £, which is declared in the main(i.e. double matrix[4][3])
// 
//Kondwani David Sichinga
//

#include <iostream>
#include "FinalExam.cpp"
using namespace std;

//Here the user is prompted to input data that is between -2.5 and 2.5 using 2 for loops
//the data is validated using a while loop to ensure the data entred is between -2.5 and 2.5
void EnterMatrixData(double matrix[][3], const int SIZE1)
{
		double num1 = 3;
		cout << "Enter a number between -2.5 and 2.5 :" << endl;

		for (int i = 0; i < SIZE1; ++i) 
		{
			cout << "Row " << (i + 1) << " :";
			for (int j = 0; j < 3; ++j)
			{
				cin >> matrix[i][j];
				cout << " ";

			}
			cout << endl;
		}

		cout << endl;
	;
}

//This function uses a for loop within a for loop to calculate the total sum of all the numbers in the matrix
//the final value is then returned and printed for the user in the main
double SumMatrixData(double matrix[][3], const int SIZE1)
{
	double sum = 0;

	for (int i = 0; i < SIZE1; i++)
		{
		for (int j = 0; j < 3; j++)
			sum += matrix[i][j];
		}

	return sum;

}

//Here a for loop within a for loop is used to print out each individual number inputted
//as well as the row it is in
void ShowMatrixData(double matrix[][3], const int SIZE1)
{

	cout << "Content of matrix";

	for (int i = 0; i < SIZE1; i++)
	{
		cout << endl << "Row " << (i + 1) << ": ";
		for (int j = 0; j < 3; j++)
			cout << matrix[i][j] << "\t";
	}
	cout << endl;

}


int main()
{
	//the double matrix is initalized with the constant variables of 4 and 3 in the arrays
	const int SIZE1 = 4, SIZE2 = 3;
	double matrix[SIZE1][SIZE2];
	double* Sumofmatrix = 0;
	int choice = 0;


	while (choice != 4)
	{

		//The user is prompted to input a choice from a menu ranging from 1 - 4
		//It is done by using a loop that will reitterate until the value of 4 is selected

		cout << "1) Enter data in matrix (range -2.5 to 2.5)" << endl;
		cout << "2) Sum of all numbers" << endl;
		cout << "3) Show data int matrix" << endl;
		cout << "4) Exit" << endl;
		cout << "Please enter choice: " ;
		cin >> choice;

			switch (choice)
			{
				case 1:
				{
					EnterMatrixData(matrix, SIZE1 );
					break;
				}

				case 2:
				{
					cout << "The sum of the matrix is " << SumMatrixData(matrix, SIZE1) << endl << endl;					
					break;
				}

				case 3:
				{
					ShowMatrixData(matrix, SIZE1);
					break;
				}

				case 4:
				{
					cout << "Goodbye " << endl;
					break;
				}

				default:
				{
					cout << "Invalid input, Please reenter choice " << endl;
					break;
				}


			}

}


	return 0;
}