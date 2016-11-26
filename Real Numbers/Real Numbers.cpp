//Write a program that accepts two real numbers and a select number from the user.
//If the entered select code is 1, a + b
//2, a * b
//3, a / b

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a, b;
	int code;

	cout << "Input two real numbers: "; cin >> a >> b; cout << endl;
	cout << "Select code:" << endl;
	cout << "1 to add " << a << " and " << b << endl;
	cout << "2 to multiply " << a << " by " << b << endl;
	cout << "3 to divide " << a << " by " << b << endl; cout << endl; cin >> code;

	cout << endl;

	switch (code)
	{
	case 1: cout << "Answer is: " << a + b; break;
	case 2: cout << "Answer is: " << a * b; break;
	case 3: cout << "Answer is: " << a / b; break;
	}
	_getch();
	return 0;
}