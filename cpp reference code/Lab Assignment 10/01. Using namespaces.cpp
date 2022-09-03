/*
* Name: Khusan Rashidov
* Student ID: U2010224
* Programs: 1. Write a program to generate Pascal's triangle.
*	   	    2. Operation with matrices.
*		    3. Table.
*/
#include<iostream>
using namespace std;
namespace matrixOne
{
	int a[10][10], b[10][10], row, column;
}
namespace matrixTwo
{
	int a[10][10], b[10][10], c[10][10], row, column;
}
namespace matrixThree
{
	int a[10][10], b[10][10], row, column;
}
namespace matrixFour
{
	int a[10][10], b[10][10], c[10][10];
}
namespace matrixK
{
	int row, column;
}
namespace matrixH
{
	int row, column;
}
int main()
{
main_menu:
	int select;
	cout << "Select program: " << endl;
	cout << "1. Pascal's triangle." << endl;
	cout << "2. Operation with matrices." << endl;
	cout << "3. Salesmen and products table." << endl;
	cout << "0. Exit program." << endl;
	cout << endl;
	cout << "Your choice: ";
	cin >> select;
	system("cls");
	switch (select)
	{
	case 0:
	{
		exit(8); //exit(any value) for terminating program
	}
	break;
	case 1:
			cout << "This program generates Pascal�s triangle (using 2d array)." << endl;
			int i, j, n, a[80][80];
			cout << "Enter the number of lines: ";
			cin >> n;
			a[0][0] = 1;
			cout << '/n';
			cout << a[0][0] << endl;
			for (i = 0; i < n - 1; i++)
			{
				a[i + 1][0] = 1;
				cout << a[i + 1][0] << " ";
				for (j = 0; j < i; j++)
				{
					a[i + 1][j + 1] = a[i][j] + a[i][j + 1];
					cout << a[i + 1][j + 1] << " ";
				}
				a[i + 1][i + 1] = 1;
				cout << a[i + 1][i + 1] << endl;
			}
			system("pause");
			system("cls");
			goto main_menu;
		break;
	case 2:
	statement:
		int choice;
		cout << "Select the operation:" << endl;
		cout << "0. Go to main menu." << endl;
		cout << "1. Displaying the matrix." << endl;
		cout << "2. Sum of two matrix." << endl;
		cout << "3. Transpose of the matrix." << endl;
		cout << "4. Product of the two matrix." << endl;
		cout << "5. Exit program." << endl;
		cout << endl;
		cout << "Your choice: ";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 0:
		{
			goto main_menu;
		}
		break;
		case 1:
		{
			using namespace matrixOne;
			cout << "1. Program to display input matrix." << endl;
			cout << "Input number of rows and columns for a matrix:" << endl;
			cout << "Row: ";
			cin >> row;
			cout << "Column: ";
			cin >> column;
			system("cls");
			cout << "Enter elements for matrix:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << "Enter a" << i + 1 << j + 1 << ": ";
					cin >> a[i][j];
				}
			}
			cout << "____________________________________________________" << endl;
			system("cls");
			cout << "Entered matrix is:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << a[i][j] << ' ';
				}
				cout << endl;
			}
		}
		system("pause");
		system("cls");
		goto statement;
		break;
		case 2:
		{
			using namespace matrixTwo;
			cout << "2. Program to sum two matrices." << endl;
			cout << "Input number of rows and columns for two matrices:" << endl;
			cout << "Row: ";
			cin >> row;
			cout << "Column: ";
			cin >> column;
			system("cls");
			cout << "Enter elements for the first matrix:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << "Enter a" << i + 1 << j + 1 << ": ";
					cin >> a[i][j];
				}
			}
			system("cls");
			cout << "Entered first matrix a:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << a[i][j] << ' ';
				}
				cout << endl;
			}
			cout << "____________________________________________________" << endl;
			cout << "Enter elements for the second matrix:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << "Enter b" << i + 1 << j + 1 << ": ";
					cin >> b[i][j];
				}
			}
			cout << "____________________________________________________" << endl;
			cout << "Entered second matrix b:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << b[i][j] << ' ';
				}
				cout << endl;
			}
			system("pause");
			system("cls");
			cout << "____________________________________________________" << endl;
			cout << "Sum of two matrices a and b is:" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
				}
			}
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << c[i][j] << ' ';
				}
				cout << endl;
			}
		}
		system("pause");
		system("cls");
		goto statement;
		break;
		case 3:
		{
			using namespace matrixThree;
			cout << "3. Program to transpose the matrix." << endl;
			cout << "Enter rows and columns of matrix:" << endl;
			cout << "Row: ";
			cin >> row;
			cout << "Column: ";
			cin >> column;
			system("cls");
			cout << "Enter elements of the matrix:" << endl;
			for (int i = 0; i < row; ++i)
			{
				for (int j = 0; j < column; ++j)
				{
					cout << "Enter a" << i + 1 << j + 1 << ": ";
					cin >> a[i][j];
				}
			}
			system("cls");
			cout << "Entered matrix:" << endl;
			for (int i = 0; i < row; ++i)
			{
				for (int j = 0; j < column; ++j)
				{
					cout << " " << a[i][j];
					if (j == column - 1)
						cout << endl;
				}
			}
			for (int i = 0; i < row; ++i)
			{
				for (int j = 0; j < column; ++j)
				{
					b[j][i] = a[i][j];
				}
			}
			cout << "_____________________________________________" << endl;
			cout << "Transpose of the matrix:" << endl;
			for (int i = 0; i < column; ++i)
			{
				for (int j = 0; j < row; ++j)
				{
					cout << " " << b[i][j];
					if (j == row - 1)
						cout << endl;
				}
			}
		}
		system("pause");
		system("cls");
		goto statement;
		break;
		case 4:
		{
			using namespace matrixFour;
			cout << "4. Program to multiply two matrices." << endl;
			cout << "Input number of rows for the first matrix: ";
			cin >> matrixK::row;
			cout << "Input number of columns for the first matrix: ";
			cin >> matrixK::column;
			cout << "Input number of rows for the second matrix: ";
			cin >> matrixH::row;
			cout << "Input number of columns for the second matrix: ";
			cin >> matrixH::column;
			while (matrixK::column != matrixH::row)
			{
				cout << "The number of column in the first matrix must be equal to number of rows in the second matrix." << endl;
				system("pause");
				system("cls");
				cout << "Input number of rows for the first matrix: ";
				cin >> matrixK::row;
				cout << "Input number of columns for the first matrix: ";
				cin >> matrixK::column;
				cout << "Input number of rows for the second matrix: ";
				cin >> matrixH::row;
				cout << "Input number of columns for the second matrix: ";
				cin >> matrixH::column;
			}
			cout << "______________________________________________" << endl;
			cout << "Enter the elements of the first matrix:" << endl;
			for (int i = 0; i < matrixK::row; ++i)
			{
				for (int j = 0; j < matrixK::column; ++j)
				{
					cout << "Enter a" << i + 1 << j + 1 << ": ";
					cin >> a[i][j];
				}
			}
			cout << "______________________________________________" << endl;
			cout << "Enter the elements of the second matrix:" << endl;
			for (int i = 0; i < matrixH::row; ++i)
			{
				for (int j = 0; j < matrixH::column; ++j)
				{
					cout << "Enter b" << i + 1 << j + 1 << ": ";
					cin >> b[i][j];
				}
			}
			system("cls");
			cout << "Entered matrix a:" << endl;
			for (int i = 0; i < matrixK::row; ++i)
			{
				for (int j = 0; j < matrixK::column; ++j)
				{
					cout << " " << a[i][j];
					if (j == matrixK::column - 1)
						cout << endl;
				}
			}
			cout << "Entered matrix b:" << endl;
			for (int i = 0; i < matrixH::row; ++i)
			{
				for (int j = 0; j < matrixH::column; ++j)
				{
					cout << " " << b[i][j];
					if (j == matrixH::column - 1)
						cout << endl;
				}
			}
			for (int i = 0; i < matrixK::row; ++i)
			{
				for (int j = 0; j < matrixH::column; ++j)
				{
					c[i][j] = 0;
					for (int k = 0; k < matrixK::column; ++k)
					{
						c[i][j] += a[i][k] * b[k][j];
					}
				}
			}
			cout << "The product of two matrices:" << endl;
			for (int i = 0; i < matrixK::row; ++i)
			{
				for (int j = 0; j < matrixH::column; ++j)
				{
					cout << c[i][j] << ' ';
					if (j == matrixH::column - 1)
						cout << endl;
				}
			}
		}
		system("pause");
		system("cls");
		goto statement;
		break;
		case 5:
		{
			exit(0);//return 0; return EXIT_SUCCESS; return EXIT_FAILURE;
		}
		break;
		default: cout << "Wrong input!!! Input 1,2,3,4.";
			system("pause");
			system("cls");
			goto statement;
		}
		break;
	case 3:
		int K[3][5];
		int option;
		cout << "Choose the operation:" << endl;
		cout << "1. Sum of the products by the salesman." << endl;
		cout << "2. Total sum of the items." << endl;
		cout << "Your option: ";
		cin >> option;
		system("pause");
		system("cls");
		if (option == 1)
		{
			int K[3][5];
			int sum = 0;
			int choice;
			cout << "Input each salesman's product amount:\n";
			for (int i = 0; i < 5; i++)
			{
				cout << "Input number " << (i + 1) << " salesman's product amount:" << endl;
				for (int j = 0; j < 3; j++)
				{
					cout << "Product " << j + 1 << ": ";
					cin >> K[i][j];
				}
			}
			system("cls");
			cout << "Entered data list:" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << (i + 1) << " - salesman: ";
				for (int j = 0; j < 3; j++)
				{
					for (int k = 0; k < 3; k++)
					{
						cout << " ";
					}
					cout << K[i][j];
				}
				cout << endl;
			}
			cout << endl;
			cout << "Select salesman's number to see total amount of products: " << endl;
			cout << "1st salesman." << endl;
			cout << "2nd salesman." << endl;
			cout << "3rd salesman." << endl;
			cout << "4th salesman." << endl;
			cout << "5th salesman." << endl;
			cout << endl << "Salesman number ";
			cin >> choice;
			for (int i = choice; i < (choice + 1); i++)
			{
				for (int j = 0; j < 3; j++)
				{
					sum = sum + K[i - 1][j];
				}
			}
			cout << choice << " - salesman's total sold products: " << sum << endl;
		}
		else if (option == 2)
		{
			int K[3][5];
			int sum = 0;
			int choice;
			cout << "Input each salesman's product amount:" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << "Input number " << (i + 1) << " salesman's product amount." << endl;
				for (int j = 0; j < 3; j++)
				{
					cout << "Product " << j + 1 << ": ";
					cin >> K[i][j];
				}
			}
			system("cls");
			cout << "Entered data list:" << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "Type " << (i + 1) << " product: ";
				for (int j = 0; j < 5; j++)
				{
					for (int k = 0; k < 5; k++)
					{
						cout << " ";
					}
					cout << K[j][i];
				}
				cout << endl;
			}
			cout << "Which sum of the products sum would you like to see?" << endl;
			cout << "1 - product" << endl;
			cout << "2 - product" << endl;
			cout << "3 - product" << endl;
			cin >> choice;
			for (int i = choice; i < (choice + 1); i++)
			{
				for (int j = 0; j < 5; j++)
				{
					sum += K[j][choice - 1];
				}
			}
			cout << "Total sum selling of the particular type of the product: " << sum << endl;
		}
		system("pause");
		system("cls");
		goto main_menu;
		break;
	default:cout << "Output: Wrong Input. Enter proper option number." << endl;
		system("pause");
		system("cls");
		goto main_menu;
		break;
	}
	system("pause");
	return 0;
}