/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find a factorial of a number using functions
*/
#include<iostream>
using namespace std;
int Factorial(int num)
{
	int fact = 1;
	while (num >= 1)
	{
		fact *= num;
		num--;
	}
	return fact;
}
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Factorial of the entered number: " << Factorial(num) << endl;
	system("pause");
	return 0;
}