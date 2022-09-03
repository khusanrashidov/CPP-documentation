/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to show the use of nesting and pointing Data Stuctures in C++
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct bookInfo
{
	string bookTitle;
	int publishYear;
	char authorName[20];
};
struct bookStore
{
	bookInfo book;
	short pageAmount;
	string bookCategory, bookGenre;
	double bookPrice;
} bookworm;
void book(bookStore)
{
	cout << "Book:" << endl;
	cout << "Title of the book: " << bookworm.book.bookTitle << endl;
	cout << "Year of publication: " << bookworm.book.publishYear << endl;
	cout << "Author name of book: " << bookworm.book.authorName << endl;
	cout << "Page amount in the book: " << bookworm.pageAmount << endl;
	cout << "Book category: " << bookworm.bookCategory << endl;
	cout << "Genre of the book: " << bookworm.bookGenre << endl;
	cout << "The price for the book: " << bookworm.bookPrice << endl << endl;
}
int main(void)
{
	string string;
	bookStore *bookpointer = &bookworm;
	bookStore &bookreference = bookworm;
	cout << "Enter title of the book: ";
	getline(cin >> ws, bookpointer->book.bookTitle);
	cout << "Enter year of publication: ";
	getline(cin >> ws, string);
	stringstream(string) >> bookpointer->book.publishYear;
	cout << "Enter author name of book: ";
	cin.getline(bookworm.book.authorName, 20);
	cout << "Enter page amount in the book: ";
	getline(cin >> ws, string);
	stringstream(string) >> bookworm.pageAmount;
	cout << "Enter book category: ";
	getline(cin >> ws, bookreference.bookCategory);
	cout << "Enter genre of the book: ";
	getline(cin >> ws, (*bookpointer).bookGenre);
	cout << "Enter a price for the book: ";
	getline(cin >> ws, string);
	(stringstream) string >> (*bookpointer).bookPrice;
	system("cls");
	cout << "BOOKWORM:" << endl;
	book(bookworm);
	cout << "BOOKPOINTER:" << endl;
	book(*bookpointer);
	cout << "BOOKREFERENCE:" << endl;
	book(bookreference);
	system("pause");
	return 0;
}