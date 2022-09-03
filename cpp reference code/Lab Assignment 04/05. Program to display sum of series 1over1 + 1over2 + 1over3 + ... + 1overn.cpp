/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n
*/
#include<iostream>
using namespace std;
int main()
{
	double temp = 1, number;
	double sum = 0;
	cout << "Enter the number up to which you want to print sum: ";
	cin >> number;
	if (number > 0)
	{
		while (temp <= number)
		{
			if (temp == number) //Just for formatting
			{
				cout << 1 << "/" << temp;
			}
			else
			{
				cout << 1 << "/" << temp << " + ";
			}
			sum += 1 / temp; //Calculating sum by making temporary variable reciprocal
			temp++;
		}
		cout << " = " << sum << endl << endl;
	}
	else {
		cout << "Do not enter non-positive or zero number." << endl;
	}
	system("pause");
	return 0;
}