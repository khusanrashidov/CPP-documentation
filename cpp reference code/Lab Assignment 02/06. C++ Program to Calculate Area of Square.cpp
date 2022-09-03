/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area of Square
*/
#include<iostream>
using namespace std;
int main()
{
	double side;
	cout << "Enter the side of the square: ";
	cin >> side;
	double area = pow(side, 2);
	cout << "Area of square: " << area << endl;
	system("pause");
	return 0;
}