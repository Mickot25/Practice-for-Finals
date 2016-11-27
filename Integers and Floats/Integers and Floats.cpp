//Write a program that accepts 3 integers and 3 floating point numbers.
//The first integer is displayed and padded with 4 zeros.
//The 2nd padded with 5
//The 3rd padded with 6
//Floating point numbers are displayed in two decimal places
//And are right justified on the 15th column.

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int i1, i2, i3;
	float f1, f2, f3;

	cout << "Input three integers: "; cin >> i1 >> i2 >> i3;
	cout << "Input three float numbers: "; cin >> f1 >> f2 >> f3;
	
	cout << endl;

	cout << "Result:" << endl;
	cout << setw(4) << setfill('0') << i1 << endl;
	cout << setw(5) << setfill('0') << i2 << endl;
	cout << setw(6) << setfill('0') << i3 << endl;
	cout << setw(15) << setfill(' ') << setprecision(2) << fixed << f1 << endl;
	cout << setw(15) << setfill(' ') << setprecision(2) << fixed << f2 << endl;
	cout << setw(15) << setfill(' ') << setprecision(4) << fixed << f3 << endl;

	_getch();
	return 0;
}