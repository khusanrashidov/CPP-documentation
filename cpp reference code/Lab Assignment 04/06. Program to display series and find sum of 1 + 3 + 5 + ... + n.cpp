/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to display series and find sum of 1 + 3 + 5 + ... + n
*/
#include<iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0, temp = 1;
	cout << "Enter any natural odd number: ";
	cin >> number;
	if (number % 2 != 0 && number > 0)
	{
		while (temp <= number)
		{
			if (temp == number) //Just for formatting
			{
				cout << temp;
			}
			//Just for formatting
			else {
				cout << temp << " + ";
			}
			sum += temp;
			temp += 2;
		}
		cout << " = " << sum << endl;
	}
	else {
		cout << "Enter non-negative odd integer number." << endl;
	}
	system("pause");
	return 0;
}