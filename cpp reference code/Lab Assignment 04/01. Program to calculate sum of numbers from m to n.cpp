/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to calculate sum of numbers from m to n
*/
#include<iostream>
using namespace std;
int main()
{
	int m, n, sum = 0;
	cout << "Input two numbers m and n respectively: ";
	cin >> m >> n;
	if (n > m)  //Check if n is greater than m
	{
		cout << "Sum from " << m << " to " << n << " = ";
		while (m <= n)
		{
			sum = sum + m;
			m++;
		}
		cout << sum << "." << endl;
	}
	else if (m > n)  //Check if m is greater than n
	{
		cout << "Sum from " << n << " to " << m << " = ";
		while (n <= m)
		{
			sum = sum + n;
			n++;
		}
		cout << sum << "." << endl;
	}
	else //Check if both m an n are equal
	{
		sum = n = m;
		cout << "As n = m sum from " << n << " to " << m << " is " << sum << ".\n";
	}
	system("pause");
	return 0;
}