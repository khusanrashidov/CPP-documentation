/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find whether the given number is a prime or composite number
*/
#include <iostream>
using namespace std;
int main()
{
	int temp;
	bool isPrime = true;
	int number;
	cout << "Enter any natural number to know whether it is a prime number: ";
	cin >> number;
	if (number >= 0) //checking for positiveness, because prime numbers are not negative
	{
		if (number == 0)
		{
			cout << "Zero is neither prime nor composite." << endl;
		}
		else if (number == 1)
		{
			cout << "Number " << number << " is not a prime number, it is a composite number." << endl;
		}
		else {
			for (int i = 2; i <= number / 2; i++)
			{
				temp = number % i;
				if (temp == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				cout << number << " is prime number." << endl;
			}
			else
			{
				cout << number << " is composite number." << endl;
			}
		}
	}
	system("pause");
	return 0;
}