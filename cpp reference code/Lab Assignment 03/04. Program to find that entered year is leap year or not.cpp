/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find that entered year is leap year or not
*/
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter year according to Gregorian calendar: ";
	cin >> year;
	//Conditions for being a leap year
	if (year >= 1582)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			cout << "Entered year is leap." << endl;
		}
		else {
			cout << "Entered year is not leap." << endl;
		}
	}
	else {
		cout << "Year should be natural number \
and equal to or higher than 1582 according to Gregorian calendar." << endl;
	}
	system("pause");
	return 0;
}