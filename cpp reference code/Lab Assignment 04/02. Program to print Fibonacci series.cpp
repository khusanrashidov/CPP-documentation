/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to print Fibonacci series
*/
#include <iostream>
using namespace std;
int main()
{
	int first = 0, second = 1, fibonacci = 0, term;
	int option;
	cout << "Choose option number in menu:" << endl;
	cout << "1.Find n'th term in Fibonacci sequence." << endl;
	cout << "2.Printing Fibonacci series up to particular number." << endl;
	cout << "Your option: ";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		cout << "Enter number of the term which you want to see in Fibonacci sequence: ";
		cin >> term;
		if (term == 1)
		{
			cout << "The " << term << "'st term of Fibonacci sequence is " << first << "." << endl;
		}
		else if (term == 2)
		{
			cout << "The " << term << "'nd term of Fibonacci sequence is " << second << "." << endl;
		}
		else if (term == 3)
		{
			cout << "The " << term << "'rd term of Fibonacci sequence is " << second << "." << endl;
		}
		else {
			term -= 1;
			for (int k = 0; k < term; k++)
			{
				fibonacci = first + second;
				first = second;
				second = fibonacci;
			}
			cout << "The " << term << "'th term of Fibonacci sequence is " << first << "." << endl;
		}
		break;
	}
	case 2:
	{
		int number;
		cout << "Enter number till which you want to print Fibonacci series: ";
		cin >> number;
		cout << "Fibonacci series till " << number << endl;
		cout << first;
		while (fibonacci <= number)
		{
			fibonacci = first + second;
			first = second;
			second = fibonacci;
			cout << ", " << first;
		}
		cout << "." << '\n';
		break;
	}
	default: cout << "Wrong option number. Next time enter 1 or 2." << endl;
		break;
	}
	system("pause");
	return 0;
}