#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include "School.h"

int MAX_STUDENTS = 36;
int MAX_CLASSES = 9;
int MAX_CLASSTEACHERS = 9;

int main(void)
{
	bool loop = true;
	int choice, studentNumber, classNumber, classTeacherNumber;
	string studentName, classTeacherName;

	School* Osmicka = new School(MAX_STUDENTS, MAX_CLASSES, MAX_CLASSTEACHERS);

	for (int i = 0; i < MAX_CLASSES-4; i++)
	{
		Osmicka->CreateStudent(i, "Benjamin");
		Osmicka->CreateClassTeacher(i, "Bedrich");
		Osmicka->CreateClass(i, Osmicka->GetStudent(i), Osmicka->GetClassTeacher(i), Osmicka->GetStudent(i));
	}

	do {
		cout << "With which action do you wish to proceed?\n1-create student\n2-create calass\n3-create class teacher\n4-search student\n5-search class teacher\n6-search class\n7-exit program\nEnter number: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Enter name of student: ";
			cin >> studentName;
			cout << endl << "Enter number of student: ";
			cin >> studentNumber;
			Osmicka->CreateStudent(studentNumber, studentName);
			cout << "New student succesfully created.";
		}
		case 2:
		{
			cout << "Enter number of student: ";
			cin >> studentNumber;
			cout << "Enter number of class teacher: ";
			cin >> classTeacherNumber;
			cout << "Enter class number: ";
			cin >> classNumber;
			Osmicka->CreateClass(classNumber, Osmicka->GetStudent(studentNumber), Osmicka->GetClassTeacher(classTeacherNumber), Osmicka->GetStudent(studentNumber));
		}
		case 3:
		{
			cout << "Enter number of class teacher: ";
			cin >> classTeacherNumber;
			cout << "Enter class teacher name";
			cin >> classTeacherName;
			Osmicka->CreateClassTeacher(classTeacherNumber, classTeacherName);
			cout << "New class teacher succesfully created.";
		}
		case 4:
		{
			cout << "Enter number of student: ";
			cin >> studentNumber;
			cout << "Number of student is: " << Osmicka->GetStudent(studentNumber)->getName() << " , he is in class " << Osmicka->GetClass(studentNumber)->getClassNumber();
		}
		case 5:
		{
			cout << "Enter class teacher number: ";
			cin >> classTeacherNumber;
			cout << "Teacher name is " << Osmicka->GetClassTeacher(classTeacherNumber)->getName();
		}
		case 6:
		{
			cout << "Enter class number: ";
			cin >> classNumber;
			cout << "Student of class is: " << Osmicka->GetClass(classNumber)->GetStudent();
		}
		case 7:
		{
			loop = false;
			break;
		}
		default:
			loop = false;
			break;
		}
	} 
	while (loop);
	Osmicka->~School();
}