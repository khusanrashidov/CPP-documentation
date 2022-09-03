/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Program Statement: Program to convert temperature from degree Centigrade to Fahrenheit and vice versa
*/
#include<iostream>
using namespace std;
int main()
{
    double Fahrenheit, Centigrade;
    double Kelvin;
    char option;
    cout << "Select the option below:" << endl; //options
    cout << "1. Centigrade to Fahrenheit." << endl; //option 1 for Centigrade
    cout << "2. Fahrenheit to Centigrade." << endl; //option 2 for Fahrenheit
    cout << "3. Kelvin to Centigrade (new)." << endl; //option 3 for Kelvin
    cin >> option;
    //option for converting Centigrade into Fahrenheit
    if (option == '1')
    {
        cout << "Enter the temperature in degrees Centigrade: "; //typing the value (C)
        cin >> Centigrade;
        Fahrenheit = (1.8 * Centigrade) + 32; //formula to convert the temperature from Celsius to Fahrenheit
        cout << "Temperature in degrees Fahrenheit: " << Fahrenheit << " Fahrenheit" << endl;
    }
    //option for converting Fahrenheit into Centigrade
    else if (option == '2')
    {
        cout << "Enter the temperature in degrees Fahrenheit: "; //typing the value (F)
        cin >> Fahrenheit;
        Centigrade = (Fahrenheit - 32) / 1.8; //formula to convert the temperature from Fahrenheit to Celsius
        cout << "Temperature in degrees Centigrade: " << Centigrade << " Centigrade" << endl;
    }
    else if (option == '3')
    {
        cout << "Enter the temperature in degrees Centigrade: ";
        cin >> Kelvin;
        Centigrade = Kelvin - 273.15; //formula to convert Kelvin to Celsius
        cout << "Temperature in degrees Centigrade: " << Centigrade << " Centigrade" << endl;
    }
    else
    { //we can also leave {}
        cout << "Input is not correct" << endl;
    }
    system("pause");
    return 0;
}