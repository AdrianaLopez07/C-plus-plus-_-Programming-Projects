/*Adriana Lopez
12/1/25
Menu program*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
int main() {

	struct menuItemType
	{
		string menuItem;
		double menuPrice;
	};

	void getData(ifstream& inFioe, struct menuItemType mList[], int listSize);
	void showMenu(menuItemType mlist[], int listSize);
	void printCheck(menuItemType mList[], int listSize, int cList[], int cListLength);
	void makeSelection(int listSize, int cList[], int)


	void getData() 
	{



	}

	void showMenu()
	{
	
	
	
	
	
	}

	void printCheck()
	{
		int i;
		double salesTax;
		double amountDue = 0;
		cout << "Welcome to Johnny's Restaurant" << endl;
		for (i = 0; i < cListLength; i++)
		{
			cout << left << setw(15) << mlist[clist[i]].menuItem << right << "$" << setw(4) << mList[cList[i]].menuPrice << endl;
			amountDue +=


		}


	}

	void makeSelection()
	{




	}




	int main() {
		menuItemType menuList[NUM_OF_ITEMS];
		int 



	}











