// gauge_calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "calcs.h"

using namespace std;

int sts;
int rows;
int option;
float length;
float width;

int main()
{
	//Gather gauge information
	cout << "Enter number of stitches in 10cm:  " << endl;
	cin >> sts;
	cout << "Enter number of rows in 10 cm: " << endl;
	cin >> rows;

	//Enter gauge in object
	GaugeCalculator GC (sts, rows);

	//Provide options for calculations
	cout << endl;
	cout << "Please choose calculation: " << endl;
	cout << "1: Calculate the number of rows required for a length in cm" << endl;
	cout << "2: Calculate the number of stitches required for a width in cm" << endl;
	cin >> option;
	cout << endl;

	switch (option) {
	case 1: cout << "Enter length in cm: " << endl;
		cin >> length;
		cout << GC.how_many_rows(length) << " rows needed for " << length << " cm." << endl;
		cout << endl;
		break;
	case 2: cout << "Enter width in cm: " << endl;
		cin >> width;
		cout << GC.how_many_stitches(width) << " stitches needed for " << width << "cm." << endl;
		cout << endl;
		break;
	}

	return 0;

}

