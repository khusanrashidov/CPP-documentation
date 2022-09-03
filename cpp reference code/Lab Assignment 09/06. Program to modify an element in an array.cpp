/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to modify an element in an array
*/
#include <iostream>
#include <new>
using namespace std;
int main()
{
	double* array_ptr;
	unsigned short int array_size;
	int number, position, k;
	cout << "Enter array size: ";
	cin >> array_size;
	array_ptr = new (nothrow) double[array_size] {};
	if (array_ptr == nullptr)
	{
		cout << "Allocation of the block of memory failed. "
			<< "Dynamic memory allocation was not successful "
			<< "due to excessive memory request." << endl;
	}
	else if (array_size == 0)
	{
		cout << "Array size should not be zero." << endl;
	}
	else
	{
		cout << "Enter elements which are stored in the array:" << endl;
		for (k = 0; k < array_size; k++)
		{
			cout << "Enter element in the index " << k << ':';
			cin >> array_ptr[k];
		}
		cout << "Entered " << array_size << " array elements:" << endl;
		for (k = 0; k < array_size; k++)
		{
			cout << "Array element " << k + 1 << ':' << array_ptr[k] << endl;
		}
		cout << "Enter the index of the number you want to modify: ";
		cin >> position;
		while (position >= array_size || position < 0)
		{
			cout << "Invalid index position, because entered index is"
				<< " bigger than or equal to the array size, or not positivie."
				<< " Enter again:" << endl;
			cin >> position;
			system("cls");
		}
		cout << "Enter number to change with the current number: ";
		cin >> number;
		cout << "Array list after change of the element at the index " << position << ": " << endl;
		array_ptr[position] = number;
		for (k = 0; k < array_size; k++)
		{
			cout << "Array element " << k + 1 << ':' << array_ptr[k] << endl;
		}
	}
	system("pause");
	return 0;
}