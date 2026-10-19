/*Name: Adriana Lopez
* Date: 9/17/25
* Program description: Learning Functions
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//Function prototype
int getLength();
int getWidth();
int calculateArea(int length, int width);
void displayAreaResult(int area);

int main()
{
		int length, width, area;
	    //Input
		length = getLength(); //Function Call
		width = getWidth();
		//Process
		area = calculateArea(length,width);
		//Output
		displayAreaResult(area);


	return 0;
}


//Function 1
int getLength()
{
	int length;

	cout << "Enter the length: ";
	cin >> length;

	return length;
}

//Function 2
int getWidth()
{
	int width;

	cout << "Enter the width: ";
	cin >> width;
	cout << endl;
	return width;
}

//Function 3
int calculateArea(int length, int width)
{
	int area;
	return length * width;


}

//Function 4
void displayAreaResult(int area)
{

	cout  << "The area of the rectangle is " << area << endl;

}