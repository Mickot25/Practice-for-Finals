//Write a program that reads in the letter grade and displays
//"Very Good!" if the letter grade is 'A'
//"Good!" if the letter grade is 'B' or 'C'
//"Fair!" if the letter grade is 'D'
//"Poor!" otherwise

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char lGrade;
	cout << "Input letter grade: "; cin >> lGrade;

	switch (lGrade)
	{
	case 'A': cout << "Very Good!"; break;
	case 'B':
	case 'C': cout << "Good!"; break;
	case 'D': cout << "Fair!"; break;
	default: cout << "Poor!"; break;
	}
	_getch();
	return 0;
}
