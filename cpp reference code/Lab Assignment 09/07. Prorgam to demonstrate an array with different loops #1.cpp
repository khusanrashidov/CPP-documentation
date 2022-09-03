/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to demonstrate the use of range-based loop
 */
#include <iostream>
#include <array>
using namespace std;
int main()
{
	int counter;
	array<double, 8>array{};
	cout << "Enter eight element of the array:" << endl;
	counter = 0;
	for (double& k : array)
	{
		cout << "Enter element " << ++counter << " at the index " << counter - 1 << ": ";
		cin >> k;
	}
	cout << "Entered eight element of the array:" << endl;
	counter = 0;
	for (double k : array)
	{
		cout << "Enter element " << ++counter << " at the index " << counter - 1 << ": " << k << endl;
	}
	system("pause");
	return 0;
}