//Write, compile and run a C++ program that accepts a user-entered number and calculates the values of the following:
//sqrt(user-entered number) and 1/(user-entered number).
//Before calculating the square root, validate that the number is not negative
//and before calculating the reciprocal, check that the number is not zero.
//If either conditions occurs, display a message stating that the operation cannot be calculated.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	double x;
	cout << "User-entered number: "; cin >> x;

	if (x > 0)
	{
		cout << "The square root of " << x << " is " << sqrt(x) << endl;
		cout << "The reciprocal of " << x << " is " << 1 / x << endl;
	}
	else
		cout << "Operation cannot be calculated!" << endl;

	_getch();
	return 0;
}