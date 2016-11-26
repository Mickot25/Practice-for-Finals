//Write, compile and run a C++ program that accepts a user-entered number and calculates the values of the following:
//sqrt(user-entered number) and 1/(user-entered number)
//Before calculating the square root, validate that the number is nto negaative,
// and before calculating the reciprocal, check that the number is not zero.
//If either conditions occurs, display a message that the operation can't be calculated.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	double x;
	cout << "Input a number: "; cin >> x;

	if (x > 0 && x != 0)
	{
		cout << "The square root of " << x << " is " << sqrt(x) << endl;
		cout << "The reciprocal of " << x << " is " << 1 / x << endl;
	}
	else
	{
		cout << "The operation cannot be calculated!" << endl;
	}

	_getch();
	return 0;
}
