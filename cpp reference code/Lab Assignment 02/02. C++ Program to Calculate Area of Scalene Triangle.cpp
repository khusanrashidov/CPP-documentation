/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area of Scalene Triangle
*/
#include<iostream>
using namespace std;
int main()
{
	double area;
	double base;
	double height;
	cout << "Input properties of triangle." << endl;
	cout << "Base: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area of the scalene triangle:" << area << endl;
	system("pause");
	return 0;
}