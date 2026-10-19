/*Adriana Lopez
12/8/25
This program helps teachers sort, organize, search, calculate, input, and display grades. 
The use of this program will help teachers save time aswell as minimize errors. */

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;



const int MAX_STUDENTS = 100;


void addGrades(int grades[], int& numStudents);
void displayGrades(int grades[], int numStudents);
double calculateAverage(int grades[], int numStudents);
int findHighestGrade(int grades[], int numStudents);
int findLowestGrade(int grades[], int numStudents);
void sortGrades(int grades[], int numStudents);
bool searchGrade(int grades[], int numStudents, int gradeToSearch);




int main() {
    int grades[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        cout << "\n--- Student Grade Analyzer ---\n";
        cout << "1. Add Grades\n";
        cout << "2. Display Grades\n";
        cout << "3. Calculate Average\n";
        cout << "4. Find Highest Grade\n";
        cout << "5. Find Lowest Grade\n";
        cout << "6. Sort Grades\n";
        cout << "7. Search for a Grade\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice)) {
            cout << "Invalid input. Enter a number between 1 and 8: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
        case 1:
            addGrades(grades, numStudents);
            break;
        case 2:
            displayGrades(grades, numStudents);
            break;
        case 3:
            cout << fixed << setprecision(2);
            cout << "Average grade: " << calculateAverage(grades, numStudents) << endl;
            break;
        case 4:
            cout << "Highest grade: " << findHighestGrade(grades, numStudents) << endl;
            break;
        case 5:
            cout << "Lowest grade: " << findLowestGrade(grades, numStudents) << endl;
            break;
        case 6:
            sortGrades(grades, numStudents);
            cout << "Grades sorted successfully.\n";
            break;
        case 7: {
            int searchValue;
            cout << "Enter grade to search for: ";
            while (!(cin >> searchValue)) {
                cout << "Invalid input. Enter a number between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (searchGrade(grades, numStudents, searchValue))
                cout << "Grade " << searchValue << " found.\n";
            else
                cout << "Grade " << searchValue << " not found.\n";
            break;
        }
        case 8:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}



void addGrades(int grades[], int& numStudents) {
    int n;
    cout << "How many grades do you want to add? ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int i = 0; i < n; i++) {
        int grade;
        cout << "Enter grade " << (numStudents + 1) << ": ";
        while (!(cin >> grade) || grade < 0 || grade > 100) {
            cout << "Invalid grade. Enter a number between 0 and 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        grades[numStudents++] = grade;
    }
}



void displayGrades(int grades[], int numStudents) {
    if (numStudents == 0) {
        cout << "No grades available.\n";
        return;
    }
    cout << "Student Grades:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": " << grades[i] << endl;
    }
}



double calculateAverage(int grades[], int numStudents) {
    if (numStudents == 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < numStudents; i++) sum += grades[i];
    return static_cast<double>(sum) / numStudents;
}



int findHighestGrade(int grades[], int numStudents) {
    if (numStudents == 0) return 0;
    int highest = grades[0];
    for (int i = 1; i < numStudents; i++)
        if (grades[i] > highest) highest = grades[i];
    return highest;
}

int findLowestGrade(int grades[], int numStudents) {
    if (numStudents == 0) return 0;
    int lowest = grades[0];
    for (int i = 1; i < numStudents; i++)
        if (grades[i] < lowest) lowest = grades[i];
    return lowest;
}



void sortGrades(int grades[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
}




bool searchGrade(int grades[], int numStudents, int gradeToSearch) {
    for (int i = 0; i < numStudents; i++) {
        if (grades[i] == gradeToSearch) return true;
    }
    return false;
}
