/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area of Right Angle Triangle
*/
#include<iostream>
using namespace std;
int main()
{
	double area;
	double leg1, leg2;
	cout << "Input values for legs of a right angle triangle respectively: ";
	cin >> leg1 >> leg2;
	area = (leg1 * leg2) / 2;
	cout << "Area: " << area << endl;
	system("pause");
	return 0;
}