
//Write a C++ program (name it final Exam) that you hist un Your Organization within Github
// Manipulate a matrix of doubles, with dimensions 4 x £, which is declared in the main(i.e. double matrix[4][3])
// 
//Kondwani David Sichinga
//

#include <iostream>
#include "FinalExam.cpp"
using namespace std;


int main()
{
	//the double matrix is initalized with the values of 4 and 3 in the arrays
	const int SIZE1 = 4, SIZE2 = 3;
	double matrix[SIZE1][SIZE2] = { 1,1,1,1 };
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

					break;
				}

				case 2:
				{

					break;
				}

				case 3:
				{

					break;
				}

				case 4:
				{
					cout << "Goodbye " << endl;
					break;
				}

				default:
				{

					break;
				}


			}

}


	return 0;
}