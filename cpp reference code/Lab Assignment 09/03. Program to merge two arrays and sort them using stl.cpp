/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to merge two arrays and sort them using stl
*/
#include <iostream>
#include <algorithm> //for sort function - standard	template library (stl)
using namespace std;
double array3[16]; //declaring array globally because uninitialized elements are for sure set to zero after program run
//or if declare locally and equally to curly brackets the elements will be automatically initiallized to zero
//double array[16] = {}; or double array[16] {};
int main()
{
	double array1[8], array2[8]; //array of size eight
	int number1, number2, k, h;
	cout << "Enter how many elements you want to insert in the first array: ";
	cin >> number1;
	while (number1 > 8 || number1 <= 0)
	{
		cout << "Enter again you should enter number within 1 to 8 range." << endl;
		system("pause");
		cout << "Enter how many elements you want to insert in the first array: ";
		cin >> number1;
		system("cls");
	}
	for (k = 0; k < number1; k++)
	{
		cout << "Enter number " << k + 1 << ": ";
		cin >> array1[k];
		array3[k] = array1[k];
	}
	h = k;
	cout << "Enter how many elements you want to insert in the second array: ";
	cin >> number2;
	while (number2 > 8 || number2 <= 0)
	{
		cout << "Enter again you should enter number within 1 to 8 range." << endl;
		system("pause");
		cout << "Enter how many elements you want to insert in the first array: ";
		cin >> number2;
		system("cls");
	}
	for (k = 0; k < number2; k++)
	{
		cout << "Enter number " << k + 1 << ": ";
		cin >> array2[k];
		array3[h] = array2[k];
		h++;
	}
	cout << "Entered first array elements:" << endl;
	for (k = 0; k < number1; k++)
	{
		cout << array1[k] << '\t';
	}
	cout << endl;
	cout << "Entered second array elements:" << endl;
	for (k = 0; k < number2; k++)
	{
		cout << array2[k] << '\t';
	}
	cout << endl;
	cout << "Merged array elements:" << endl;
	for (k = 0; k < h; k++)
	{
		cout << array3[k] << '\t';
	}
	cout << endl;
	int n = sizeof(array3) / sizeof(array3[0]); //size of array divided by the size of its element always equals to number of elements
	sort(array3, array3 + n); //sort function
	cout << "Merged sorted array elements:" << endl;
	for (k = 0; k < n; k++)
	{
		if (array3[k] == 0)
		{
			continue; //skips the rest code if array element is zero and again continues loop
		}
		cout << array3[k] << "\t";
	}
	cout << endl;
	return 0;
}