#include "Class.h"
Class::Class(int classNumber, Student* s0, ClassTeacher* classTeacher, Student* classPresident)
{
	this->classNumber = classNumber;
	student = s0;
	this->classTeacher = classTeacher;
	this->classPresident = classPresident;
}
Class::Class(int classNumber, Student* s0, Student* s1, ClassTeacher* classTeacher, Student* classPresident)
{
	this->classNumber = classNumber;
	student = s0, s1;
	this->classTeacher = classTeacher;
	this->classPresident = classPresident;
}
Class::Class(int classNumber, Student* s0, Student* s1, Student* s2, ClassTeacher* classTeacher, Student* classPresident)
{
	this->classNumber = classNumber;
	student = s0, s1, s2;
	this->classTeacher = classTeacher;
	this->classPresident = classPresident;
}
Class::Class(int classNumber, Student* s0, Student* s1, Student* s2, Student* s3, ClassTeacher* classTeacher, Student* classPresident)
{
	this->classNumber = classNumber;
	student = s0, s1, s2, s3;
	this->classTeacher = classTeacher;
	this->classPresident = classPresident;
}
int Class::getClassNumber()
{
	return classNumber;
}
Student* Class::GetStudent()
{
	return student;
}