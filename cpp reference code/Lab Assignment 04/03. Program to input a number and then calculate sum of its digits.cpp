/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to input a number and then calculate sum of its digits
*/
#include<iostream>
using namespace std;
int main()
{
	int number, sum = 0;
	cout << "Enter any natural number (and if number is negative, only digits will be summarized): ";
	cin >> number;
	while (number != 0)
	{
		if (number < 0)
		{
			number /= -1;
		}
		sum += number % 10; //Sum of digitis and formula for finding sigle digits of number
		number = number / 10; //Updating value of number at every step
	}
	cout << "Sum of its digits = " << sum << endl;
	system("pause");
	return 0;
}