/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to print stars particular sequence
*/
#include<iostream>
using namespace std;	
int main()
{
	int row;
	cout << "Enter number of rows you want in this program: ";
	cin >> row;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}