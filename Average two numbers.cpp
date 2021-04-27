#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//purpose of program: average two numbers 

	//declare variables
	double number1 = 0, number2 = 0, numaverage = 0;

	//get input from user
	cout << "enter the first number: ";
	cin >> number1;
	cout << "enter the second number: ";
	cin >> number2;

	//do calculations
	numaverage = (number1 + number2) / 2;

	//display output
	cout << "the average of the two numbers is: " << numaverage << "\n";

	//hold the console window open until users presses a key
	system("pause");
	return 0;
}