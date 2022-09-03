/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: 1. Calculate the x^y using tail recursion.
*                    2. Find sum of natural numbers using recursion.
*                    3. Display Fibonacci Series Using Recursion.
*                    4. Find G.C.D. for two integers using recursion.
*/
#include<iostream>
using namespace std;
int power(int x, int y);
int pow(int x, int y)
{
	return power(x, y); //tail Recursion
}		
int power(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return (x * power(x, y - 1)); //formula of recursion number to the entered power
}
int sum(int n)
{
    if (n != 0) //condition stops when it is false
        return n + sum(n - 1); //recursion formula after which number decrements
    return 0;
}
int Fibonacci(int n, int a = 0, int b = 1) //function with default values in parameters //(6,0,1) //(5,1,1) //(4,1,2) //(3,2,3) //(2,3,5)
{
    if (n == 0) //if the input is 0 then the output is 0
        return a;
    if (n == 1) //if the input is 1 then the output is 1
        return b;
    return Fibonacci(n - 1, b, a + b); //Fibonacci formula //(5,1,1) //(4,1,2) //(3,2,3) //(2,3,5) //(1,5,8) //ANSWER: 6th term is equal to 8
}
//instance below with GCD of 10 and 4
int GCD(int n1, int n2) //10 and 4 //4 and 2 //2 and 0
{
    if (n2 != 0) //4 is not 0 //2 is not 0 //0 is 0 so go to else
        return GCD(n2, n1 % n2); //4 and 10%4=2 //2 and 4%2=0
    else
        return n1; //n1 is 2, so 2 is returned
}
int main()
{
    int choice;
    cout << "Choose the program from given list (enter only 1 to 4 includingly)" << endl;
    cout << '\n';
    cout << "1. Calculate the x^y using tail recursion." << endl;
    cout << "2. Find sum of natural numbers using recursion." << endl;
    cout << "3. Display Fibonacci Series' Nth term using recursion." << endl;
    cout << "4. Find G.C.D. for two integers using recursion." << endl;
    cout << "Program: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int x, y;
        cout << "Input number: ";
        cin >> x;
        cout << "Input exponent: ";
        cin >> y;
        cout << x << '^' << y << '=' << pow(x, y) << endl;
        system("pause");
        return 0;
        break;
    }
    case 2:
    {
        int n;
        cout << "Enter number: ";
        cin >> n;
        if (n == 0) //if the entered value for n equals zero 
        {
            cout << "Zero is not a natural number." << endl;
        }
        else if (n < 0) //if entered value for n less than zero 
        {
            cout << "Enter a positive number." << endl;
        }
        else
        {
            cout << "Sum = " << sum(n);
        }
        return 0;
        break;
    }
    case 3:
    {
        int n;
        cout << "Enter term: ";
        cin >> n;
        if (n < 0)
        {
            cout << "Enter a positive number the value of n." << endl;
        }
        else
        {
            cout << "Fibonacci of " << n << " term" << " = " << Fibonacci(n) << endl;
        }
        return 0;
        break;
    }
    case 4:
    {
        int number1, number2;
        cout << "Enter two positive integer numbers:" << endl;
        cout << "Number 1: ";
        cin >> number1;
        cout << "Number 2: ";
        cin >> number2;
        if (number1 <= 0 || number2 <= 0) //if number is not natural
        {
            cout << "Wrong input, enter only natural numbers." << endl;
        }
        else //if number is natural
        {
            cout << "G.C.D. of " << number1 << " and " << number2 << " is " << GCD(number1, number2);
        }
        return 0;
        break;
    }
    default:
        cout << "Wrong input; enter only: 1, 2, 3, 4." << endl;
        break;
    }
    system("pause");
    return 0;
}