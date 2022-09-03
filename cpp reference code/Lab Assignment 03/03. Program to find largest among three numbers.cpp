/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find largest among three numbers
*/
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	int large;
	cout << "Enter any three numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	large = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3); //Conditional Operators
	cout << "Largest number among them is " << large << endl;
	system("pause");
	return 0;
}