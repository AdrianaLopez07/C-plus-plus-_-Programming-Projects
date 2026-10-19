/*Name: Adriana Lopez
 *Date:10/27/2025
 *Program:Difeerent number-based pattern triangles 
 *Description:This program will display a menu allowing the user to print different 
 *number base triangle
 */

#include <iostream>
#include <iomanip>
using namespace std;
void numberTriangle(int h);
void invertedNumberTraingle(int h);
void floydTraingle(int h);
int main()
{
	int height, choice;

	do
	{
		cout << "\n 1. Number right triangle\n";
		cout << " 2. Inverted number triangle\n";
		cout << " 3. Floyd's Triangle\n";
		cout << " 4. Exit\n";
		cin >> choice;
		if (choice == 4)
		{
			cout << "Goodbye!\n";
			break;
		}
		cout << "Enter the height: ";
		cin >> height;

		switch (choice)
		{
		case 1:
			numberTriangle(height);
			break;
		case 2:
			invertedNumberTraingle(height);
			break;
		case 3:
			floydTraingle(height);
			break;
		default:
			cout << "Invalid choice. Try again.\n";
		}
	} while (choice != 4);
	return 0;
}
void floydTraingle(int h)
{
	int num = 1;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << num << " ";
			num++;
		}
		cout << "\n";
	}
}
void invertedNumberTraingle(int h)
{
	for (int i = h; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}

}
void numberTriangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= i; j++)
		cout << j;
		cout << "\n";
	}
	}