//Input the value of angle and display the value in sine, cosine and tangent

#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.14159
using namespace std;

int main()
{
	double angle;
	cout << "Input value of angle: "; cin >> angle;
	cout << "Value of " << angle << " in sine is = " << sin(angle*pi / 180) << endl;
	cout << "Value of " << angle << " in cosine is = " << cos(angle*pi / 180) << endl;
	cout << "Value of " << angle << " in tangent is = " << tan(angle*pi / 180) << endl;

	_getch();
	return 0;
}