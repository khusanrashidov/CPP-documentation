/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program calculating the area of circle, rectangle, triangle, square using functions
*/
#include <iostream>
using namespace std;
double area(double r) //circle
{
	return r * r * 3.14159265;
}
float area(float l, float w) //rectangle
{
	return l * w;
}
double area(double b, double h) //triangle
{
	return b * h * 1 / 2;
}
float area(float s) //square
{
	return s * s;
}
double area(double s1, double s2, double s3) //triangle sss
{
	double x, k, h;
	x = (s1 + s2 + s3) / 2;
	k = x * (x - s1) * (x - s2) * (x - s3);
	return h = pow(k, 0.5);
}
int main()
{
	double radius;
	float length, width;
	double base, height;
	float side;
	double side1, side2, side3;
	cout << "Enter radius of a circle to calculate its area:" << endl;
	cout << "Radius: ";
	cin >> radius;
	cout << "Area: " << area(radius) << endl;
	cout << "Enter length and width of a rectangle to calculate its area:" << endl;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Area: " << area(length, width) << endl;
	cout << "Enter three sides of a triangle to calculate its area:" << endl;
	cout << "Side 1: ";
	cin >> side1;
	cout << "Side 2: ";
	cin >> side2;
	cout << "Side 3: ";
	cin >> side3;
	cout << "Area: " << area(side1, side2, side3) << endl;
	cout << "Enter side of a square to calculate its area:" << endl;
	cout << "Side: ";
	cin >> side;
	cout << "Area: " << area(side) << endl;
	cout << "Enter base and height of a triangle to calculate its area:" << endl;
	cout << "Base: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;
	cout << "Area: " << area(base, height) << endl;
	system("pause");
	return 0;
}