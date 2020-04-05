#include "Student.h"

Student::Student(string name, int personalNumber)
{
	this->name = name;
	this->personalNumber = personalNumber;
}
string Student::getName()
{
	return name;
}
int Student::getPersonalNumber()
{
	return personalNumber;
}
