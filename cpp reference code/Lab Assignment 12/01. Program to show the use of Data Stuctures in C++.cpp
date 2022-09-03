/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to show the use of Data Stuctures in C++
 */
#include <iostream>
#include <string>
using namespace std;

struct vegfruit
{
	string name;
	float weightkg;
	double price;
	float total_price;
} vegetables, fruits;

double total(vegfruit total)
{
	double intotal = 0;
	if (total.name == "carrot" || total.name == "apple")
	{
		intotal = 8 * total.weightkg;
	}
	else if (total.name == "pineapple" || total.name == "potato")
	{
		intotal = 10 * total.weightkg;
	}
	else if (total.name == "peach" || total.name == "tomato")
	{
		intotal = 7 * total.weightkg;
	}
	else if (total.name == "cucumber" || total.name == "blackberry")
	{
		intotal = 5 * total.weightkg;
	}
	else
	{
		cout << "Enter products in parenthesis." << endl;
		exit(0);
	}
	return intotal;
}

int main()
{
	cout << "Enter vegetable name (carrot, cucumber, tomato, potato): ";
	cin >> vegetables.name;
	total(vegetables);
	cout << "Enter how many kg do you want to purchase?" << endl;
	cin >> vegetables.weightkg;
	cout << "Enter fruit name (apple, pineapple, peach, blackberry): ";
	cin >> fruits.name;
	cout << "Enter how many kg do you want to purchase?" << endl;
	cin >> fruits.weightkg;
	total(fruits);
	cout << "Checkout: " << total(fruits) + total(vegetables) << '$' << endl;
	return 0;
}