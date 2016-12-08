//Write a program that computes and displays the distance between two points using:
// D = sqrt((x1-x2)^2 + (y1-y2)^2)

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cout << "Input coordinates of the first point in the format (X1, Y1): "; cin >> x1 >> y1;
	cout << "Input coordinates of the second point in the format (X2, Y2): "; cin >> x2 >> y2;
	
	double D = sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));

	cout << "Distance = " << D << endl;

	_getch();
	return 0;
}