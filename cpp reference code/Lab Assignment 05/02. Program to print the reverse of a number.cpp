/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to print the reverse of a number
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number, reverse = 0, remainder, num;
//	cout << "Enter any natural number: ";
//	cin >> number;
//	num = number; //just to save original number
//	for (; number != 0; number = number / 10)
//	{
//		remainder = number % 10; //moduling for the left most number
//		reverse = reverse * 10 + remainder; //calculating reverse
//	}
//	cout << "Reverse of the  " << num << " is = " << reverse << "." << endl; //printing value
//	system("pause");
//	return 0;
//}

//above program not just prints the reversed digits, but also store it in one variable
//however below is the simples way of printing the reversed nubmer
#include<iostream>
using namespace std;
int main()
{
	int number, reverse;
	cout << "Enter any natural number (in case number is non-positive\
		but still an integer number it will be transferred to a non-negative integer): ";
	cin >> number;
	cout << "Reversed number: ";
	if (number < 0)
	{
		number *= -1;
	}
	else if (number == 0)
	{
		cout << number;
	}
	while (number != 0)
	{
		reverse = number % 10; //taking first digit
		cout << reverse; //print digit each time from left side of the number 
		number = number / 10; //updating value of number at every step
	}
	cout << endl;
	system("pause");
	return 0;
}