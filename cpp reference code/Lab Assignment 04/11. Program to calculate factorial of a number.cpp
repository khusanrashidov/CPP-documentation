/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to calculate factorial of a number
*/
#include<iostream>
using namespace std;
int main()
{
	int number;
	int factorial = 1;
	cout << "Enter number to find its factorial: ";
	cin >> number;
	if (number >= 0)
	{
		if (number == 0)
		{
			cout << "0! = 1" << endl;
		}
		else {
			cout << number << "! = ";
			while (number != 0)
			{
				factorial *= number;
				number--;
			}
			/* or another way using for loop
				for (int k = 1; k <= number; k++)
				{
					factorial = factorial * k;
				}
			*/
			cout << factorial << endl;
		}
	}
	else {
		cout << "Factorial is not defined for negative integers." << endl;
	}
	system("pause");
	return 0;
}