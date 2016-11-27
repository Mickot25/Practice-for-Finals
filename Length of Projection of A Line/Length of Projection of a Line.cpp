//Find the projection of a line inclined in a plane.
//Given its length and angle of inclination.

#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.14159
using namespace std;

int main()
{
	double length, angle;
	cout << "Input length of line: "; cin >> length;
	cout << "Input angle of inclination: "; cin >> angle;

	cout << "Length of projection = " << sin(angle*pi/180) * length << endl;
	
	_getch();
	return 0;
}