//Create a C++ program that accepts 3 integers and displays the first nuember in hexadecimal
//the second in octal
//the third in decimal.
//Sample dialogue:
//Input three integers:
//14
//13
//12
//14 in hexadecimal is E
//13 in octal is 15
//12 in decimal is 12

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int i1, i2, i3;
	cout << "Input three integers: "; cin >> i1 >> i2 >> i3;

	cout << dec << i1 << " in hexadecimal is " << hex << i1 << endl;
	cout << dec << i2 << " in octal is " << oct << i2 << endl;
	cout << dec << i3 << " in decimal is " << i3 << endl;

	_getch();
	return 0;
}