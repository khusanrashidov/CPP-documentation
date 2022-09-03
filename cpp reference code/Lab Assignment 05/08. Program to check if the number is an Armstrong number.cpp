/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to check if the number is an Armstrong number
*/
//below program is to function for numbers within 0 to 1000 range numbers
#include <iostream>
using namespace std;
int main()
{
	int number, temp, remainder, sum = 0;
	cout << "Enter any natural number within 0 to 1000 range numbers to check whether it is an armstrong number: ";
	cin >> number;
	temp = number;
	while (number > 0)
	{
		remainder = number % 10;
		sum += (remainder * remainder * remainder);
		number /= 10;
	}
	if (temp == sum)
	{
		cout << temp << " is an Armstrong number." << endl;
	}
	else {
		cout << temp << " is not an Armstrong number." << endl;
	}
	system("pause");
	return 0;
}

////below more advanced program to check any natural number with no range for being armstrong
//#include<iostream>
//using namespace std;
///* Function to calculate x raised to the power y */
//int power(int x, unsigned int y)
//{
//    if (y == 0)
//        return 1;
//    if (y % 2 == 0)
//        return power(x, y / 2) * power(x, y / 2);
//    return x * power(x, y / 2) * power(x, y / 2);
//}
///* Function to calculate order of the number */
//int order(int x)
//{
//    int n = 0;
//    while (x)
//    {
//        n++;
//        x = x / 10;
//    }
//    return n;
//}
//// Function to check whether the given number is
//// Armstrong number or not
//bool isArmstrong(int x)
//{
//    // Calling order function
//    int n = order(x);
//    int temp = x, sum = 0;
//    while (temp)
//    {
//        int r = temp % 10;
//        sum += power(r, n);
//        temp = temp / 10;
//    }
//
//    // If satisfies Armstrong condition
//    return (sum == x);
//}
//// Driver Program
//int main()
//{
//    int number;
//    cout << "Enter any natural number to check whether it is an armstrong number: ";
//    cin >> number;
//    if (isArmstrong(number) == true)
//    {
//        cout << "An Armstrong number." << endl;
//    }
//    else if (isArmstrong(number) == false)
//    {
//        cout << "Not an Armstrong number." << endl;
//    }
//    return 0;
//}
////above program is set to consider that 0 to 9 is armstrong number