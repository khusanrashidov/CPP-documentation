/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to sum the series: (1/!1) + (4/!2) + (27/!3) + ... + (n^n/!n)
*/
#include<iostream>
using namespace std;
double sum()
{
	int numerator, denomenator, sequence; double sum = 0.0;
	cout << "Enter till which term you want to print sum: ";
	cin >> sequence;
	if (sequence >= 0)
	{
        for (int k = 1; k <= sequence; k++)
		{
			numerator = 1;
			for (int i = 1; i <= k; i++)
			{
				numerator *= k;
			}
			denomenator = 1;
			for (int j = 1; j <= k; j++)
			{
				denomenator *= j;
			}
			sum = sum + 1.0 * numerator / denomenator;
		}
	}
	else {
		cout << "Enter only positive integer number.";
	}
	return sum;
}
int main()
{
	cout << sum() << endl;
	system("pause");
	return 0;
}