/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Write a program to add first eight+1 terms of the following series using for loop: 1/!1+ 2/!2 + 3/!3 + ...
*/
#include<iostream>
using namespace std;
int main()
{
	double sum = 0, factorial, k;
	for (int i = 1; i <= 9; i++) //loop for sum
	{
		factorial = 1;
		for (int j = 1; j <= i; j++) //loop for factorial
		{
			factorial = factorial * j;
		}
		k = i / factorial;  //calculation of num/(factorial of num)
		sum += k; //calculation of sum
	}
	cout << sum << endl;
	system("pause");
	return 0;
}