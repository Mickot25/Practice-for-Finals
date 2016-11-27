//Write a program when you input the radius of the sphere, it will display its:
//a) Volume
//b) Area of the Largest Inscribed Circle

#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.14159
using namespace std;

int main()
{
	double r;
	cout << "Input radius of the sphere: "; cin >> r;
	cout << "Volume of the sphere = " << (4 * pi * pow(r, 3)) / 3 << endl;
	cout << "Area of the largest inscribed circle = " << pi*pow(r, 2) << endl;

	_getch();
	return 0;
}


