/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: C++ Program to Calculate Area of Rectangle
*/
#include<iostream>
using namespace std;
int main()
{
	double area, width, length;
	cout << "Enter rectangle width and length respectively: ";
	cin >> width >> length;
	area = width * length;
	cout << "Area of the rectangle: " << area << endl;
	system("pause");
	return 0;
}