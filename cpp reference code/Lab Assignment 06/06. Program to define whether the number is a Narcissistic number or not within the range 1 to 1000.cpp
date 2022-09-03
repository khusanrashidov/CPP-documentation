/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to define whether the number is a Narcissistic number or not within the range 1 to 1000
*/
#include <iostream>
using namespace std;
int countDigit(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}
bool check(int n)
{
    int l = countDigit(n);
    int dup = n;
    int sum = 0;
    while (dup)
    {
        sum += pow(dup % 10, l);
        dup /= 10;
    }
    return (n == sum);
}
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    if (check(n))
        cout << "A Narcissistic number.";
    else
        cout << "Not a Narcissistic number.";
    return 0;
}

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//    int nl, nu;
//    cout << "Find the Narcissistic decimal numbers between a specific range:" << endl;
//    cout << " --------------------------------------------------------------------\n";
//    cout << "Input the lower limit: ";
//    cin >> nl;
//    cout << "Input a upper limit: ";
//    cin >> nu;
//    cout << "The Narcissistic decimal numbers between " << nl << " and " << nu << " are: \n";
//    int i, ctr, j, orn, n, m, sum;
//    for (orn = nl; orn <= nu; orn++)
//    {
//        ctr = 0;
//        sum = 0;
//        n = orn;
//        while (n > 0)
//        {
//            n = n / 10;
//            ctr++;
//        }
//        n = orn;
//        while (n > 0)
//        {
//            m = n % 10;
//            sum = sum + pow(m, ctr);
//            n = n / 10;
//        }
//        if (sum == orn)
//        {
//            cout << " " << orn << " ";
//        }
//    }
//    cout << endl;
//}