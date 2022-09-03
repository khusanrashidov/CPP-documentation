/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find largest among three integers and among three floating point numbers using overloading
*/
#include<iostream>
using namespace std;
int ternary(int n1, int n2, int n3)
{
	return (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
}
double ternary(double n1, double n2, double n3)
{
	return (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
}
int main()
{
	int num1, num2, num3;
	double fnum1, fnum2, fnum3;
	cout << "Enter three integer numbers to find the largest one:" << endl;
	cout << "1st number: ";
	cin >> num1;
	cout << "2nd number: ";
	cin >> num2;
	cout << "3rd number: ";
	cin >> num3;
	cout << "The largest among three numbers: " << ternary(num1, num2, num3) << endl;
	cout << "Enter three floating point numbers to find the largest one:" << endl;
	cout << "1st number: ";
	cin >> fnum1;
	cout << "2nd number: ";
	cin >> fnum2;
	cout << "3rd number: ";
	cin >> fnum3;
	cout << "The largest among three numbers: " << ternary(fnum1, fnum2, fnum3) << endl;
	system("pause");
	return 0;
}