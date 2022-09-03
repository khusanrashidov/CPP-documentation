/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to define whether the number is a Lychrel number or not within the range 1 to 1000
*/
#include <iostream>
using namespace std;
long long int numReverse(long long int number)
{
    long long int rem = 0;
    while (number > 0)
    {
        rem = (rem * 10) + (number % 10);
        number = number / 10;
    }
    return rem;
}
bool is_Palindrome(long long int num)
{
    return (num == numReverse(num));
}
bool isLychrel(int num, const int iterCount = 800)
{
    long long int temp = num;
    long long int rev;
    for (int i = 0; i < iterCount; i++)
    {
        rev = numReverse(temp);
        if (is_Palindrome(rev + temp))
            return false;
        temp = temp + rev;
    }
    return true;
}
int main()
{
    int lyno;
    bool l;
    cout << "Input a number: ";
    cin >> lyno;
    l = isLychrel(lyno);
    if (l == 0)
    {
        cout << "The number is not a Lychrel number." << endl;
    }
    else
        if (l == 1)
        {
            cout << "The number is a Lychrel number." << endl;;
        }
    return 0;
}