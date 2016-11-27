//Write a program that askes the user to enter 2 integers
//and determine and display their sum, difference, product, quotient and remainder

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int i1, i2;
	cout << "Enter two integers:"; cin >> i1 >> i2;
	cout << "The sum of " << i1 << " and " << i2 << " is = " << i1 + i2 << endl;
	cout << "The difference of " << i1 << " to " << i2 << " is = " << i1 - i2 << endl;
	cout << "The product of " << i1 << " and " << i2 << " is = " << i1*i2 << endl;
	cout << "The quotient of " << i1 << " by " << i2 << " is = " <<  double (i1) / double (i2) << endl;

	_getch();
	return 0;
}