/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to display arithmetic operator using switch case
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	double num1, num2;
	cout << "Input number1: ";
	cin >> num1;
	cout << "Input number2: ";
	cin >> num2;
	cout << "Which operation you want to perform:" << endl; //Check for the operator
	cout << "1. Input + for addition " << endl;
	cout << "2. Input - for subtraction " << endl;
	cout << "3. Input * for multiplication " << endl;
	cout << "4. Input / for  divison " << endl;
	cout << "Your choice: ";
	cin >> ch;
	cout << "Output: ";
	switch (ch) //Switch case
	{
	case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*': cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default: cout << " Wrong Input you should input any one of them: +, -, *, /." << endl << endl;
		break;
	}
	system("pause");
	return 0;
}