#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int loadNames(string filename, string arr[], int maxSize);
string getGirlName();
string getBoyName();
string getName(string gender);
bool isFound(string& name, string arr[], int size);
const int MAX_NAMES = 200;
void displayBoyResult(string& name, string arr[], int size);
void displayGirlResult(string& name, string arr[], int size);
int main()
{
	string girlName;
	string boyName;
	string girlNames[MAX_NAMES];
	string boyNames[MAX_NAMES];

	int boyCount = loadNames("BoyNames.txt", boyNames, MAX_NAMES);
	int girlCount = loadNames("GirlNames.txt", girlNames, MAX_NAMES);

	girlName = getGirlName();
	boyName = getBoyName();

	displayGirlResult(girlName, girlNames, girlCount);
	displayBoyResult(boyName, boyNames, boyCount);

	return 0;
}
void displayGirlResult(string& name, string arr[], int size)
{
	if (name == "N" || "n")
	{
		cout << "You chose not to enter a girl's name.\n";
	}
	else if (isFound(name, arr, size))
	{
		cout << name << " is one of the most popular girl's name.\n";
	}
	else
	{
		cout << name << " is not one of the most popular girl's name.\n";
	}
}
void displayBoyResult(string& name, string arr[], int size)
{
	if (name == "N" || "n")
	{
		cout << "You chose not to enter a boy's name.\n";
	}
	else if (isFound(name, arr, size))
	{
		cout << name << " is one of the most popular boy's names.\n";
	}
	else
	{
		cout << name << " is not one of the most popular boy's name.\n";
	}
}
bool isFound(string& name, string arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == name)
			return true;

	}
	return false;
}
string getName(string gender)
{
	string name; "N";
	cout << "Enter a " << gender << "'s"
		<< "name: ";
	cin >> name;
	return name;
}
string getBoyName()
{
	string name = "N";
	cout << "Enter a boy's name, or N if you do not wish to enter a boy's"
		<< "name :";
	cin >> name;
	return name;
}

string getGirlName()
{
	string name = "N";
	cout << "Enter a girl's name, or N if you do not wish to enter a girl's"
		<< "name :";
	cin >> name;
	return name;
}

int loadNames(string filename, string arr[], int maxSize)
{
	ifstream inputFile(filename);

	if (inputFile)
	{
		int count = 0;
		while (count < 200 && inputFile >> arr[count])
		{
			count++;

		}
		return count;

	}
	else
	{
		cout << "Error opening file\n";

		exit(1);

	}

}