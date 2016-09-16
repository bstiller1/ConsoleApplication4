#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
// need namespace std for cout
using namespace std;

// Constants for feet and inches conversion
// 12 inches = 1 foot
const int inchesInFoot = 12;
// 2.54 cm = 1 inch
const double feet2cm = 2.54;

int main()
{
	// declare integer and string variables
	int feet;
	int inches;
	string name;
	string filename;
	ofstream file;
	// prompt user for first and last name
	cout << "Enter your first and last name:" << endl;
	// use getline() to get a string from the user including all the whitespace
	getline(cin,name);
	// prompt user for height and weight in feet and inches
	cout << "Enter your height in feet and inches:" << endl;
	// take user input for feet & inches and put into variables
	cin >> feet >> inches;
	cout << "Enter a filename:" << endl;
	cin >> filename;
	file.open(filename.c_str());

	// display results with equations on screen (std out) 
	cout << name << " is " << inches + (feet * inchesInFoot) << " inches tall";
	// This will put 50 characters on screen to seperate inches from centimeters
	cout << setw(50) << setfill('-') << endl;
	// display results with equations on screen (std out)
	cout << "\n or " << feet2cm * (inches + (feet * inchesInFoot)) << " centimeters" << endl;

	file << name << " is " << inches + (feet * inchesInFoot) << " inches tall" << "\n"
	<< setw(50) << setfill('-') << "\n or " << feet2cm * (inches + (feet * inchesInFoot)) << " centimeters" << endl;
	file.close();
    return 0;
}

