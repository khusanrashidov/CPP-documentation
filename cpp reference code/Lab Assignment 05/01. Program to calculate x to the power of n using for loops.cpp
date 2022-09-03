/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to calculate x to the power of n using for loops
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double number, power, tempexp = 1;
	int num, denom;
	cout << "Enter number which you want to raise to the particular power: ";
	cin >> number;
	cout << "Now enter to what exponent do you want to calculate: ";
	cin >> power;
	int temp = power / 1; //to check if the entered power number is not decimal
	//for negative decimal power
	if (temp * 1 != power && power < 0) //condition through which decimal number will be fractional
	{
		power *= -1;
		double fractional_part = power - floor(power);
		for (double i = 0.1, j = 10; ; i /= 10, j *= 10)
		{
			if (fractional_part >= i)
			{
				power* j, j;
				num = power * j; denom = j;
				for (int i = denom; i >= 2; i--)
				{
					if (num % i == 0 && denom % i == 0)
					{
						num = num / i;
						denom = denom / i;
					}
				}
				break;
			}
		}
		cout << "Converting decimal power to fractional: ";
		if (denom == 1)
			cout << num;
		else
			cout << num << "/" << denom;
		cout << endl;
		double rootvalue = pow(number, 1.00000000 / denom);
		double powvalue = pow(rootvalue, num);
		cout << 1 / powvalue << endl << endl;
	}
	//for negative power
	if (temp * 1 == power && power < 0)
	{
		cout << number << "^" << power << " = ";
		power *= -1;
		for (int k = 1; k <= power; k++)
		{
			tempexp *= number;
		}
		tempexp = 1 / tempexp;
		cout << tempexp << endl << endl;
	}
	//for positive non-fractional power
	else if (temp * 1 != power && power > 0)
	{
		double fractional_part = power - floor(power);
		for (double i = 0.1, j = 10; ; i /= 10, j *= 10)
		{
			if (fractional_part >= i)
			{
				power* j, j;
				num = power * j; denom = j;
				for (int i = denom; i >= 2; i--)
				{
					if (num % i == 0 && denom % i == 0)
					{
						num = num / i;
						denom = denom / i;
					}
				}
				break;
			}
		}
		cout << "Converting decimal power to fractional: ";
		if (denom == 1)
			cout << num;
		else
			cout << num << "/" << denom;
		cout << endl;
		double rootvalue = pow(number, 1.00000000 / denom); //nth root of number function for simplicity
		double powvalue = pow(rootvalue, num); //nth power of number function for simplicity
		cout << powvalue << endl << endl;
	}
	//for positive power
	else {
		for (int k = 1; k <= power; k++)
		{
			tempexp *= number;
		}
		cout << number << "^" << power << " = " << tempexp << endl << endl;
	}
	system("pause");
	return 0;
}

////below the same program using pow function. It is better to use pow function instead above program because there might be inaccurate results
//#include <iostream>
//#include <iomanip> //for setprecision keyword
//using namespace std;
//int main()
//{
//    double x, y;
//    cout << "Program to calculate x^y:" << endl;
//    cout << "Input x: ";
//    cin >> x;
//    cout << "Input y: ";
//    cin >> y;
//    double result = pow(x, y);
//    cout << "Without fixed and setprecision keyword: ";
//    cout << result << endl;
//    cout << "Without fixed flag, but setprecision keyword: ";
//    cout << setprecision(8) << result << endl;
//    cout << "With fixed flag and setprecision keyword: ";
//	  cout << fixed << setprecision(8) << result << endl;
//	  return 0;
//}