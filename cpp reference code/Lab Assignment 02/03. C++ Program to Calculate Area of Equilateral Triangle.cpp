/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area of Equilateral Triangle
*/
#include<iostream>
using namespace std;
int main()
{
	double area;
	double side;
	cout << "Input value of a side: ";
	cin >> side;
	double m = pow(3, 0.5); //power function
	double n = 4;
	area = (m / n) * side * side;
	cout << "Area: " << area << endl;
	system("pause");
	return 0;
}