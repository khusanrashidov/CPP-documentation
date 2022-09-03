/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to use switch statement. Display Monday to Sunday
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number of the day: ";
	cin >> num;
	switch (num)
	{
	case 1: cout << "Sunday" << endl;
		break;
	case 2:	cout << "Monday" << endl;
		break;
	case 3:	cout << "Tuesday" << endl;
		break;
	case 4:	cout << "Wednesday" << endl;
		break;
	case 5:	cout << "Thursday" << endl;
		break;
	case 6:	cout << "Friday" << endl;
		break;
	case 7:	cout << "Saturday" << endl;
		break;
	default: cout << "Invalid number!" << endl;
		break;
	}
	system("pause");
	return 0;
}