
/*Name: Adriana Lopez
* Data: 11/26/25
* Program: Soccer Scores
* Description: Write a program that stores the following data about a
* soccer player in a structure: Player's Name, Player's Number,
* Points scored by player. The program should keep an array of 12 of
* these structures. Each element is for a different player on the team.
* When the program runs it should ask the user to enter the data for each
* player. It should the show a table that lists each player's
* number, name and points scored. The program should also calculate and
* display the total points earned by the team. The number and name
* of the player who has earned the most points should also be displayed.
* Input Validation: Do not accept negative value for players' number or points scored.
*/


#include <iostream>
#include <string>
#include <string>
#include <iomanip>
using namespace std;



//constant for the number of players
const int NUM_PLAYERS = 3;
//Declaration of the player structure
struct player
{
	string name; //Players Name
	int number; //Players Number
	int points; //Points scored by the player
};

//Function Pototype
void getPlayerInfo(player& p);
int getTotalPoints(player p[], int size);
void showHighest(player p[], int size);
void showInfo(player p);

int main()
{
	player team[NUM_PLAYERS];

	for (int index = 0; index < NUM_PLAYERS; index++)
	{
		cout << "Player #" << (index + 1) << endl;
		getPlayerInfo(team[index]);
		cin.get();

	}
	//Display the team info
	cout << "Name \t\t" << "Number \t\t" << "Points Scored" << endl;
	for (int index = 0; index < NUM_PLAYERS; index++)
	{
		showInfo(team[index]);
	}

	cout << "Total Points: "
		<< getTotalPoints(team, NUM_PLAYERS) << endl;
	//display the highest score

	showHighest(team, NUM_PLAYERS);


	return 0;
}

void showInfo(player p)
{
	cout << setw(20) << p.name << endl;
	cout << setw(10) << p.number << endl;
	cout << setw(10) << p.points << endl;
}


void showHighest(player p[], int size)
{
	int highest = 0, highPoints = p[0].points;
	for (int index = 1; index < size; index++)
	{
		if (p[index].points > highPoints)
		{
			highest = index;
			highPoints = p[index].points;
		}
	}
	cout << "The player who scored the most points is: ";
	cout << p[highest].name << endl;
}


int getTotalPoints(player p[], int size)
{
	int total = 0;
	for (int index = 0; index < size; index++)
	{
		total = total + p[index].points;
		//total+= p[index].points;
	}
	return total;
}


void getPlayerInfo(player& p)
{
	cout << "Player Name: ";
	getline(cin, p.name);
	cout << "Player's Name: ";
	cin >> p.number;
	cout << "Points Scored: ";
	cin >> p.points;
}