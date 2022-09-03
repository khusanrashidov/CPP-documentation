/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to calculate area of a circle using functions
*/
#include<iostream>
using namespace std;
void circleArea();
const double pi = 3.14159265;
int main()
{
	circleArea();
	system("pause");
	return 0;
}
void circleArea()
{
	double area, radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	area = pi * radius * radius; //formula to find the area of a circle : area=pi*r^2
	cout << "Area = " << area << endl;
}