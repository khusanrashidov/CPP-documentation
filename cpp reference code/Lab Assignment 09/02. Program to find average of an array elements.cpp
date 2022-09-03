/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to find average of an array elements
*/
#include <iostream>
using namespace std;
int main()
{
	double array[8], sum = 0; //array of size eight
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
		sum += array[k]; //total sum of the elements
	}
	cout << "Average of the array elements: " << sum / number << endl; //calculating average
	return 0;
}