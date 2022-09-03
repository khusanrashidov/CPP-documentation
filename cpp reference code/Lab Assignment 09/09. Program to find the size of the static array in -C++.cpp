/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to show the size of the static array
 */
#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<double, 8>array{};
	cout << "Enter eight element of the array:" << endl;
	for (int k = 0; k < 8; k++)
	{
		cout << "Enter element " << k + 1 << " at the index " << k << ": ";
		cin >> array[k];
	}
	cout << "Entered eight element of the array:" << endl;
	int size = (sizeof(array) / sizeof(array[0]));
	for (int k = 0; k < size; k++)
	{
		cout << "Element " << k + 1 << " at the index " << k << ": ";
		cout << array[k] << '\n';
	}
	cout << "Boolean: " << ((size == array.size()) + 7 == 8) << endl;
	system("pause");
	return 0;
}