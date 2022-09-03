/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area and Circumference of Circle
*/
#include<iostream>
using namespace std;
const double pi = 3.14;
int main()
{
	double area;
	double radius;
	double circumference;
	cout << "Input the radius of the circle: ";
	cin >> radius;
	area = pi * radius * radius;
	cout <<"Area of the circle: "<< area << endl;
	circumference = 2 * pi * radius;
	cout << "Circumference of the circle: " << circumference << endl;
	system("pause");
	return 0;
}