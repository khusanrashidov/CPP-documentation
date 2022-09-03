/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to convert time to minutes using functions
*/
#include<iostream>
using namespace std;
void convert(int hours, int minutes, int seconds)
{
	cout << "Converted time to minutes:" << (hours * 60) + (minutes)+(seconds / 60) << "\n";
}
int main()
{
	int hour, minute, second;
	cout << "Enter hour(s): ";
	cin >> hour;
	cout << "Enter minute(s): ";
	cin >> minute;
	cout << "Enter second(s): ";
	cin >> second;
	cout << "Entered time - " << hour << ":" << minute << ":" << second << endl;
	convert(hour, minute, second);
	system("pause");
	return 0;
}