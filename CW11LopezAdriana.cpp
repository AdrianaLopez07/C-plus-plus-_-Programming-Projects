/* Name: Adriana Lopez
 * Date: 10/04/25
 * Program:User will imput a year and program will let them know if the year is a leap year
 * Description:
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

//Function Prototype
int getYear();
bool isLeap(int year);
void displayResult(int year, bool leap);
int main()
{
	int year;
	bool leap;
	year = getYear();
	leap = isLeap(year);
	displayResult(year, leap);
	return 0;
}
//Function Definition
void displayResult(int year, bool leap)
{
	if (leap)
	{
		cout << year << "- leap year." << endl;
	}
	else
	{
		cout << year << "- not a leap year." << endl;
		}
}
bool isLeap(int year)
{
	if ((year % 4)==0)
	{
		if ((year % 100)==0)
		{
			if ((year % 400)==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

}
int getYear()
{   int year;
	cout << "Enter a year: ";
	cin >> year;
	return year;
}