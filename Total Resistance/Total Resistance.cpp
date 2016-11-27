//Write a program that determines and displays the total resistance of two resistors
//connected in parallel using the equation:
//R = (r1*r2)/(r1+r2)

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double r1, r2;
	cout << "Input the value of two resistors: "; cin >> r1 >> r2;
	cout << "Total Resistance is = " << (r1*r2) / (r1 + r2) << endl;

	_getch();
	return 0;
}