/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to show swap of two numbers without using third variable
*/
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Input values for x = ";
	cin >> x;
	cout << "Input values for y = ";
	cin >> y;
	//Arithmetic Operations (Formula)
	y += x;
	x = y - x;
	y = y - x;
	//another way
	/*
	* x = x * y;
	* y = x / y;
	* x = x / y;
	*/
	//another way
	//x = x ^ y;
	//y = x ^ y;
	//x = x ^ y;
	//also other ways are possible using pointers
	//using third variable is very facile task
	cout << "After swapping x = " << x << endl;
	cout << "After swapping y = " << y << endl;
	system("pause");
	return 0;
}