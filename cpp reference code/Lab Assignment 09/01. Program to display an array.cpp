/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to display an array
*/
#include <iostream>
using namespace std;
int main()
{
	double array[8]; //array of size eight
	int number;
	cout << "Enter how many elements you want to insert in the array: ";
	cin >> number;
	while (number > 8 || number <= 0)
	{
		cout << "Enter again you should enter number within 1 to 8 range." << endl;
		system("pause");
		cout << "Enter how many elements you want to insert in the array: ";
		cin >> number;
		system("cls");
	}
	for (int k = 0; k < number; k++)
	{
		cout << "Enter number " << k + 1 << ": ";
		cin >> array[k];
	}
	cout << "Entered array elements:" << endl;
	for (int k = 0; k < number; k++)
	{
		cout << array[k] << "\t";
	}
	return 0;
}