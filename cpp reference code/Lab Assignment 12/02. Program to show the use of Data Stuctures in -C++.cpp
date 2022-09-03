/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to show the use of unnamed and anonymous Data Stuctures in C++
 */
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

// anonymous struct
struct
{
	string studentFullName;
	int studentAge;
	string studentId;
	string courseName;
	double courseGrade;
};

// unnamed struct
struct
{
	string studentFullName;
	int studentAge;
	string studentId;
	string courseName;
	double courseGrade;
} classInfo[20];

// regular struct
struct studentInfo
{
	string studentFullName;
	int studentAge;
	string studentId;
	string courseName;
	double courseGrade;
};

// struct with both type_name and object_name
struct structureTypeName
{
	string studentFullName;
	int studentAge;
	string studentId;
	string courseName;
	double courseGrade;
} structureObjectName;

void output(studentInfo);
char *grade(double *courseGrade);
char *ch = new char[8];

int main(void)
{
	int option, amount;
	string string;
	struct studentInfo student;
statement:
	cout << "Choose an option 1 or 2:" << endl;
	cout << "1. Input course student's information." << endl;
	cout << "2. Input course students' information." << endl;
	cout << "Your choice: ";
	cin >> ws >> option;
	switch (option)
	{
	case 1:
		cout << "Student Info:" << endl;
		cout << "Input student's full name: ";
		getline(cin >> ws, student.studentFullName);
		cout << "Input age of the student: ";
		getline(cin >> ws, string);
		(stringstream) string >> student.studentAge;
		cout << "Input student id: ";
		cin >> ws >> student.studentId;
		cout << "Input course title: ";
		getline(cin >> ws, student.courseName);
		cout << "Input student's course grade 0 to 100: ";
		cin >> ws >> student.courseGrade;
		output(student);
		delete[] ch;
		break;
	case 2:
	{
	jump:
		cout << "Enter info for min 8 and max 20 students: ";
		cin >> ws >> amount;
		while (amount > 20 || amount < 8)
		{
			goto jump;
		}
		cout << "Now enter course name: ";
		cin >> ws >> string;
		for (int k = 0; k < amount; k++)
		{
			classInfo[k].courseName = string;
		}
		for (int k = 0; k < amount; k++)
		{
			cout << "Student Info:" << endl;
			cout << "Input student \"" << k + 1 << "\" full name: ";
			getline(cin >> ws, classInfo[k].studentFullName);
			cout << "Input age of the student \"" << k + 1 << "\": ";
			getline(cin >> ws, string);
			stringstream(string) >> classInfo[k].studentAge;
			cout << "Input student \"" << k + 1 << "\" id: ";
			cin >> ws >> classInfo[k].studentId;
			cout << "Input student \"" << k + 1 << "\" course grade 0 to 100: ";
			cin >> ws >> classInfo[k].courseGrade;
			cout << endl;
		}
		for (int k = 0; k < amount; k++)
		{
			cout << "Output:" << endl;
			cout << "Student \"" << k + 1 << "\" full name: " << classInfo[k].studentFullName << endl;
			cout << "Age of the student \"" << k + 1 << "\": " << classInfo[k].studentAge << endl;
			cout << "Student \"" << k + 1 << "\" id: " << classInfo[k].studentId << endl;
			cout << "Course title: " << classInfo[k].courseName << endl;
			cout << "Student \"" << k + 1 << "\" course grade: " << grade(&classInfo[k].courseGrade) << endl;
			cout << endl;
		}
		delete[] ch;
		break;
	}
	default:
		cout << "Enter 1 or 2." << endl;
		goto statement;
	}
	return 0;
}
void output(struct studentInfo info)
{
	cout << "Output:" << endl;
	cout << "Student's full name: " << info.studentFullName << endl;
	cout << "Age of the student: " << info.studentAge << endl;
	cout << "Student's id: " << info.studentId << endl;
	cout << "Course title: " << info.courseName << endl;
	cout << "Student's course grade: " << grade(&info.courseGrade) << endl;
}
char *grade(double *courseGrade)
{
	if (*courseGrade <= 100 && *courseGrade > 89)
	{
		strcpy(ch, "A+");
		return ch;
	}
	else if (*courseGrade <= 89 && *courseGrade > 79)
	{
		strcpy(ch, "A0");
		return ch;
	}
	else if (*courseGrade < 80 && *courseGrade > 69)
	{
		strcpy(ch, "B+");
		return ch;
	}
	else if (*courseGrade < 70 && *courseGrade > 59)
	{
		strcpy(ch, "B0");
		return ch;
	}
	else if (*courseGrade <= 60 && *courseGrade > 49)
	{
		strcpy(ch, "C+");
		return ch;
	}
	else if (*courseGrade <= 50 && *courseGrade > 39)
	{
		strcpy(ch, "C0");
		return ch;
	}
	else if (*courseGrade < 41 && *courseGrade >= 30)
	{
		strcpy(ch, "D+");
		return ch;
	}
	else if (*courseGrade < 31 && *courseGrade >= 20)
	{
		strcpy(ch, "D0");
		return ch;
	}
	else if (*courseGrade < 20 && *courseGrade > -1)
	{
		strcpy(ch, "F");
		return ch;
	}
	else
	{
		cout << "Invalid mark. Enter course grade between 0 and 100" << endl;
		exit(0);
	}
}