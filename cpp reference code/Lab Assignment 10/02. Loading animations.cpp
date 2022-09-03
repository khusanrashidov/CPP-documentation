// this_thread::sleep_for example
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <windows.h>
#include<conio.h>		//for _getch()
using namespace std;
int main()
{
	string line = "=";
	string unit;
	cout << "Press enter to launch." << endl;
	cin.get();
	for (int i = 0; i <= 100; ++i)
	{
		cout << unit << endl;
		cout << "\x1B[2J\x1B[H"; //clean screen
		unit += line;
		cout << i << "%" << endl;
		Sleep(8);
	}
	std::cout << "Press enter to launch." << endl;
	std::cin.get();
	int k = 100;
	do {
		std::cout << "\033c";
		k--;
		std::cout << k << "%\n"; //clean screen
		std::this_thread::sleep_for(std::chrono::milliseconds(80));
		//or just seconds instead of milliseconds
	} while (k > 0);
	cout << "Press enter to continue." << endl;
	_getch();
	cout << "Completed\n";
	system("cls"); //clean screen
	system("pause");
	return 0;
}