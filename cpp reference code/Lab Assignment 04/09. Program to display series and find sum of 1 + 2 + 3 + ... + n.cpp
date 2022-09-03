/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to display series and find sum of 1 + 2 + 3 + ... + n
* For instance: n = 8; sum = (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
*/
#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0, temp;
	cout << "Enter natural number till which you want to find sum: ";
	cin >> n;
	temp = n;
	while (n >= 1)
	{
		sum += n;
		n--;
	}
	cout << "The sum of all natural numbers from 0 to " << temp << " is " << sum << endl;
	system("pause");
	return 0;
}