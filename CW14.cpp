//Adriana Lopez
//10/15/25
//Grade checker

#include <iostream>
#include <iomanip>
using namespace std;


void checkGrade(char grade);
int main()
{

	char grade;
	cout << "Grade Checker Program\n";
	cout << "---------------------\n";
	cout << "\nEnter a grade (A-F) or Q to quit: ";
	cin >> grade;


	while (grade != 'Q' && grade != 'q')
	{

		checkGrade(grade);
		cout << "\nEnter a grade (A-F) or Q to quit: ";
		cin >> grade;


	}
	cout << "Goodbye!";
	


	return 0;
}

void checkGrade(char grade)
{
	switch (grade)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'C':
	case 'c':
		cout << "You passed!\n";
		break;
	case 'D':
	case 'd':
	case 'F':
	case 'f':
		cout << "You did not pass!\n";
		break;
	default:
		cout << "Invalid grade.\n";


	}



}