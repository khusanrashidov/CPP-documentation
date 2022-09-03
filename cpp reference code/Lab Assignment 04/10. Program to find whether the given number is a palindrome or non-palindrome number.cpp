/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find whether the given number is a palindrome or non-palindrome number
*/
#include <iostream>
using namespace std;
int main()
{
	int number, temp, digit, reverse = 0;
	cout << "Enter any natural number to check if it is palindrome number: ";
	cin >> number; //818
	temp = number;
	while (number != 0)
	{
		digit = number % 10; //digit=818%10=8 //digit=81%10=1 //digit=8%10=8
		reverse = (reverse * 10) + digit; //reverse=(0*10)+8=8 //reverse=(8*10)+1=81 //reverse=(81*10)+8=818
		number = number / 10; //number=818/10=81 //number=81/10=8
	}
	if (temp == reverse)
	{
		cout << temp << " is a palindrome number." << endl;
	}
	else {
		cout << temp << " is a non-palindrome number." << endl;
	}
	system("pause");
	return 0;
}