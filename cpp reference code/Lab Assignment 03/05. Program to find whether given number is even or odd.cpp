/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find whether given number is even or odd
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer number: ";
    cin >> num;
    if (num % 2 == 0) //Condition to find whether the input value is odd or even
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    system("pause");
    return 0;
}