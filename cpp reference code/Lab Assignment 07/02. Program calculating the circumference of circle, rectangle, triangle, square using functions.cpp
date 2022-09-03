/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program calculating the circumference of circle, rectangle, triangle, square using functions
*/
#include <iostream>
using namespace std;
#define Pi 3.14159265
double perimeter(double r) //circle
{
	return 2 * r * Pi;
}
float perimeter(float l, float w) //rectangle
{
	return (l + w) * 2;
}
double perimeter(double s1, double s2, double s3) //triangle sss
{
	return s1 + s2 + s3;
}
float perimeter(float s) //square
{
	return 4 * s;
}
int main()
{
	double radius;
	float length, width;
	double base, height;
	float side;
	double side1, side2, side3;
	cout << "Enter radius of a circle to calculate its circumference:" << endl;
	cout << "Radius: ";
	cin >> radius;
	cout << "Circumference: " << perimeter(radius) << endl;
	cout << "Enter length and width of a rectangle to calculate its circumference:" << endl;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Circumference: " << perimeter(length, width) << endl;
	cout << "Enter three sides of a triangle to calculate its circumference:" << endl;
	cout << "Side 1: ";
	cin >> side1;
	cout << "Side 2: ";
	cin >> side2;
	cout << "Side 3: ";
	cin >> side3;
	cout << "Circumference: " << perimeter(side1, side2, side3) << endl;
	cout << "Enter side of a square to calculate its circumference:" << endl;
	cout << "Side: ";
	cin >> side;
	cout << "Circumference: " << perimeter(side) << endl;
	system("pause");
	return 0;
}