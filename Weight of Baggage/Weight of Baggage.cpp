/*
An airline company needs a program to compute baggage charges.
Write a C++ program that asks the user to enter the weight of a passenger's baggage.
The program should display the weight of the baggage and the baggage charge, which is calculated as follows:
If the weight of the baggage is 7 kg or less, display "No charge"
If the baggage weight is greater than 7 kg but less than 20 kg, the charge is 124.75 + 12.65 for each kg over 7 kg.
If baggage weight is 20 kg or more, the charge is 235.25 plus 15.85 for each kg over 20 kg.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double weight;
	cout << "Input weight of the baggage in kg: "; cin >> weight;

	cout << "The weight of the baggage: " << weight << " kg" << endl;

	if (weight >= 0 && weight <= 7)
		cout << "The baggage charge: No charge" << endl;

	else if (weight > 7 && weight < 20)
		cout << "The baggage charge: P" << 124.75 + (weight - 7)*12.65 << endl;

	else
		cout << "Baggage charge: P" << 235.25 + (weight - 20)*15.85 << endl;

	_getch();
	return 0;

}