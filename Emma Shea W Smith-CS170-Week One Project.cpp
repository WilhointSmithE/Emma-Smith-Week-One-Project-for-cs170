// Emma Shea W Smith-CS170-Week One Project.cpp 
//

#include <iostream>
using namespace std;

int main()
{
	//============================
    // Declare variables to store
	//==============

	string name;
	int age;
	double height;
	int siblings;
	int birthYear;

	//==============================
	// Ask the user for their input
	//================================================================================================

	cout << "               Please enter the following information about yourself below! \n";

	cout << " Enter your name:  ";
	cin >> name;

	cout << " Enter your age: ";
	cin >> age;

	cout << " Enter your height in meters: ";
	cin >> height;

	cout << " Enter number of siblings: ";
	cin >> siblings; 

	//===================================
	// Declare Constant for Current Year
	// ==================================
	
	const int Current_Year = 2026;

	//=========================
	// Calculate year of birth
	//===============================

	birthYear = Current_Year - age;

	//==================
	// Clear the screen
	//=============

	system("cls");

	//=====================
	// Display the results
	//==================================================

	cout << "\n======Personal Information======\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << "meters" << endl; 
	cout << "Number of siblings: " << siblings << endl; 
	cout << "Year of birth: " << birthYear << endl; 

	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
