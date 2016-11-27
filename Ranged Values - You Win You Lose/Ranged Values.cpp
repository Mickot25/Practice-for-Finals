//Write a program that asks the user to type an integer and writes "YOU WIN!"
//if the value is between 56 and 78 (both included)
//in the other case it writes "YOU LOSE!"

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x;
	cout << "Type an integer: "; cin >> x;

	if (x >= 56 && x <= 78)
		cout << "YOU WIN!" << endl;

	else
		cout << "YOU LOSE!" << endl;

	_getch();
	return 0;
}
