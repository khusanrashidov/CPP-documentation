/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to manipulate with the dynamic array
 */
#include <iostream>
#include <new>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <array>
using namespace std;
void insert_element(double array_ptr[], unsigned short int& array_size)
{
	int number, position, k;
	cout << "Entered " << array_size << " array element(s):" << endl;
	for (k = 0; k < array_size; k++)
	{
		cout << "Array element " << k + 1 << " in the index " << k << ':' << array_ptr[k] << endl;
	}
	cout << "Enter the number you want to insert in the array list: ";
	cin >> number;
	cout << "Enter at which index position you want to insert: ";
	cin >> position;
	while (position > array_size || position < 0)
	{
		cout << "Invalid index position, because entered index is"
			<< " bigger than the array size or less than zero."
			<< " Enter again:" << endl;
		cin >> position;
		system("cls");
	}
	array_ptr[array_size] = array_ptr[array_size++];
	for (k = array_size - 1; k >= position; k--)
	{
		array_ptr[k + 1] = array_ptr[k];
	}
	array_ptr[position] = number;
	cout << "Array list after insertion:" << endl;
	for (k = 0; k < array_size; k++)
	{
		cout << "Array element " << k + 1 << ':' << array_ptr[k] << endl;
	}
}
void delete_element(double array_ptr[], unsigned short int& array_size)
{
	int position, k;
	cout << "Entered " << array_size << " array element(s):" << endl;
	for (k = 0; k < array_size; k++)
	{
		cout << "Array element " << k + 1 << " in the index " << k << ':' << array_ptr[k] << endl;
	}
	cout << "Enter from which index position you want to delete the element: ";
	cin >> position;
	while (position >= array_size || position < 0)
	{
		cout << "Invalid index position, because entered index is"
			<< " bigger than or equal to the array size, or negative."
			<< " Enter again:" << endl;
		cin >> position;
		system("cls");
	}
	for (k = position; k < array_size; k++)
	{
		array_ptr[k] = array_ptr[k + 1];
	}
	array_ptr[array_size] = array_ptr[array_size--];
	cout << "Array list after deletion:" << endl;
	for (k = 0; k < array_size; k++)
	{
		cout << "Array element " << k + 1 << ':' << array_ptr[k] << endl;
	}
}
void modify_element(double array_ptr[], unsigned short int& array_size)
{
	int number, position, k;
	cout << "Entered " << array_size << " array element(s):" << endl;
	for (k = 0; k < array_size; k++)
	{
		cout << "Array element " << k + 1 << " in the index " << k << ':' << array_ptr[k] << endl;
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
int main()
{
	double* array_ptr;
	unsigned short int array_size;
	string str;
	char choice;
	int number, position, k, option;
main_menu:
statement:
	cout << "Program to manipulate with an array." << endl;
	cout << "Choose the option number amongst below:" << endl;
	cout << "1. Create an array." << endl;
	cout << "2. Exit program." << endl;
	cout << "Your choice: ";
	getline(cin, str);
	stringstream(str) >> option;
	switch (option)
	{
	case 1:
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
			cout << "Enter element(s) to store in the array:" << endl;
			for (k = 0; k < array_size; k++)
			{
				cout << "Enter element in the index " << k << ':';
				cin >> array_ptr[k];
			}
			cout << "Entered " << array_size << " array element(s):" << endl;
			for (k = 0; k < array_size; k++)
			{
				cout << "Array element " << k + 1 << ':' << array_ptr[k] << endl;
			}
		}
		cout << "Press Enter to continue." << endl;
		_getch();
		system("cls");
	menu:
		cout << "What do you want to do with the created array?" << endl;
		cout << "Choose the option number amongst below!" << endl;
		cout << "1. Insert a new element to the array." << endl;
		cout << "2. Delete an existing element from the array." << endl;
		cout << "3. Update an existing element in the array." << endl;
		cout << "4. Travevrse the array." << endl;
		cout << "5. Delete the array." << endl;
		cout << "Your choice: ";
		cin >> option;
		if (option == 1)
		{
			insert_element(array_ptr, array_size);
			cout << endl;
		option_1:
			cout << "Do you want now exit the program or go to the menu?" << endl;
			cout << "Press Y for \"yes\" to go to menu or N for \"no\" to exit program!" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				goto menu;
			}
			else if (choice == 'N' || choice == 'n')
			{
				return EXIT_SUCCESS;
			}
			else
			{
				cout << "Wrong option. Enter y or n." << endl;
				cout << "Press Enter to continue." << endl;
				_getch();
				system("cls");
				goto option_1;
			}
		}
		else if (option == 2)
		{
			delete_element(array_ptr, array_size);
			cout << endl;
		option_2:
			cout << "Do you want now exit the program or go to the menu?" << endl;
			cout << "Press Y for \"yes\" to go to menu or N for \"no\" to exit program!" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				goto menu;
			}
			else if (choice == 'N' || choice == 'n')
			{
				return EXIT_SUCCESS;
			}
			else
			{
				cout << "Wrong option. Enter y or n." << endl;
				cout << "Press Enter to continue." << endl;
				_getch();
				system("cls");
				goto option_2;
			}
		}
		else if (option == 3)
		{
			modify_element(array_ptr, array_size);
			cout << endl;
		option_3:
			cout << "Do you want now exit the program or go to the menu?" << endl;
			cout << "Press Y for \"yes\" to go to menu or N for \"no\" to exit program!" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				goto menu;
			}
			else if (choice == 'N' || choice == 'n')
			{
				return EXIT_SUCCESS;
			}
			else
			{
				cout << "Wrong option. Enter y or n." << endl;
				cout << "Press Enter to continue." << endl;
				_getch();
				system("cls");
				goto option_3;
			}
		}
		else if (option == 4)
		{
			cout << "Entered " << array_size << " array element(s):" << endl;
			for (k = 0; k < array_size; k++)
			{
				cout << "Array element " << k + 1 << " in the index " << k << ':' << array_ptr[k] << endl;
			}
			cout << endl;
		option_4:
			cout << "Do you want now exit the program or go to the menu?" << endl;
			cout << "Press Y for \"yes\" to go to menu or N for \"no\" to exit program!" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				goto menu;
			}
			else if (choice == 'N' || choice == 'n')
			{
				return EXIT_SUCCESS;
			}
			else
			{
				cout << "Wrong option. Enter y or n." << endl;
				cout << "Press Enter to continue." << endl;
				_getch();
				system("cls");
				goto option_4;
			}
		}
		else if (option == 5)
		{
		option_5:
			delete[] array_ptr;
			cout << "Dynamically allocated memory for the entered array is now deallocated." << endl;
			cout << "Your array has been deleted from the heap. Used memory is now freed." << endl;
			cout << endl;
			cout << "Do you want now exit the program or go to the main menu?" << endl;
			cout << "Press Y for \"yes\" to go to main menu or N for \"no\" to exit program!" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				system("cls");
				goto main_menu;
			}
			else if (choice == 'N' || choice == 'n')
			{
				return EXIT_SUCCESS;
			}
			else
			{
				cout << "Wrong option. Enter y or n." << endl;
				cout << "Press Enter to continue." << endl;
				_getch();
				system("cls");
				goto option_5;
			}
		}
		else
		{
			cout << "Wrong option. Enter 1, 2, 3, 4, or 5." << endl;
			cout << "Press Enter to continue." << endl;
			_getch();
			system("cls");
			goto menu;
		}
		break;
	case 2:
		break;
	default:
		cout << "Wrong option. Enter 1 or 2." << endl;
		cout << "Press Enter to continue." << endl;
		_getch();
		system("cls");
		goto statement;
	}
	system("pause");
	return EXIT_FAILURE;
}