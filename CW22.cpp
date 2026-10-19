//Adriana Lopez


#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

string getGirlName();
string getBoyName();
vector<string> getVector(const string& filename);
bool isFound(const string& name, const vector<string>& values);
void displayBoyResult(const string& name, const vector<string>& values);
void displayGirlResult(const string& name, const vector<string>& values);

int main()
{
	// Read names from files
	vector<string> boyNames = getVector("BoyNames.txt");
	vector<string> girlNames = getVector("GirlNames.txt");

	// Get names from user
	string boyName = getBoyName();
	string girlName = getGirlName();

	// Display results
	displayBoyResult(boyName, boyNames);
	displayGirlResult(girlName, girlNames);

	return 0;
}

vector<string> getVector(const string& filename)
{
	vector<string> values;
	ifstream inputFile(filename);

	if (!inputFile)
	{
		cout << "Error opening file: " << filename << endl;
		return values; // empty
	}

	string value;
	while (inputFile >> value)
	{
		values.push_back(value);
	}

	inputFile.close();
	return values;
}

bool isFound(const string& name, const vector<string>& values)
{
	// if name is "N" or "n" we treat it as "not entered" elsewhere
	return find(values.begin(), values.end(), name) != values.end();
}

string getBoyName()
{
	string name;
	cout << "Enter a boy's name, or N if you do not wish to enter a boy's name: ";
	cin >> name;
	return name;
}

string getGirlName()
{
	string name;
	cout << "Enter a girl's name, or N if you do not wish to enter a girl's name: ";
	cin >> name;
	return name;
}

void displayBoyResult(const string& name, const vector<string>& values)
{
	if (name == "N" || name == "n")
	{
		cout << "You chose not to enter a boy's name.\n";
	}
	else if (isFound(name, values))
	{
		cout << name << " is one of the most popular boy names.\n";
	}
	else
	{
		cout << name << " is not one of the most popular boy names.\n";
	}
}

void displayGirlResult(const string& name, const vector<string>& values)
{
	if (name == "N" || name == "n")
	{
		cout << "You chose not to enter a girl's name.\n";
	}
	else if (isFound(name, values))
	{
		cout << name << " is one of the most popular girl names.\n";
	}
	else
	{
		cout << name << " is not one of the most popular girl names.\n";
	}
}