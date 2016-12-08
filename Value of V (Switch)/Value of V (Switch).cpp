/*
The value of V depends on the values of x and y as follows:
V = xyz when x = 1 and 1<y<5
V = x+y/z when x = 1 and y >= 5
V = |(xy)/z| when x = 2 and y <= 5
V = x + sqrt(y+z) when x = 2 and y > 5
V = x+y+z for other values of x and y
Write a C++ program that accepts two integers x and y from the kbd.
Let z = 2.5
Use a constant declaration for z and output V with 10 field width and two decimal places.
Use switch statement for selection of x values.
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#define z 2.5
using namespace std;

int main()
{
	int x, y;
	double V;
	
	cout << "Input two integers: "; cin >> x >> y;

	switch (x)
	{
	case 1:
		if (y > 1 && y < 5)
			V = x*y*z;

		else if (y >= 5)
			V = (x + y) / z;

		else
			V = x + y + z;
		break;

	case 2:
		if (y <= 5)
			V = fabs((x*y) / z);

		else if (y >= 5)
			V = x + sqrt(double(y) + z);

		else
			V = x + y + z;
		break;

	default: V = x + y + z;
		break;
	}
	cout << setw(10) << setprecision(2) << fixed << "V = " << V << endl;
	_getch();
	return 0;
}
