#include "School.h"
#include <stdlib.h>

School::School(int students, int classes, int teachers)
{
	studentsCount = students;
	this->students = (Student**)malloc(students * sizeof(Student*));
	for (int i = 0; i < students; i++)
		this->students[i] = (Student*)malloc(sizeof(Student));

	classesCount = classes;
	this->classes = (Class**)::operator new(classes * sizeof(Class*));
	for (int j = 0; j < classes; j++)
		this->classes[j] = (Class*)::operator new(sizeof(Class));

	classTeachersCount = teachers;
	this->classTeachers = (ClassTeacher**)malloc(teachers * sizeof(ClassTeacher*));
	for (int k = 0; k < teachers; k++)
		this->classTeachers[k] = (ClassTeacher*)malloc(sizeof(ClassTeacher));
}
School::~School() {}
Student* School::GetStudent(int pn)
{
	Student* student;
	if (pn = students[pn]->getPersonalNumber())
	{
		student = students[pn];
	}
	else student = students[NULL];
	return student;
}
ClassTeacher* School::GetClassTeacher(int pn)
{
	ClassTeacher* classTeacher;
	if (pn = classTeachers[pn]->getPersonalNumber())
	{
		classTeacher = classTeachers[pn];
	}
	else classTeacher = classTeachers[NULL];
	return classTeacher;
}
Class* School::GetClass(int cn)
{
	Class* clas;
	if (cn = classes[cn]->getClassNumber())
	{
		clas = classes[cn];
	}
	else clas = classes[NULL];
	return clas;
}

Student* School::CreateStudent(int pc, string n)
{
	Student* student = new Student(n, pc);
	students[pc] = student;
	return student;
}
ClassTeacher* School::CreateClassTeacher(int pc, string n)
{
	ClassTeacher* classTeacher = new ClassTeacher(n, pc);
	classTeachers[pc] = classTeacher;
	return classTeacher;
}
Class* School::CreateClass(int classNumber, Student* s0, ClassTeacher* classTeacher, Student* classPresident)
{
	Class* clas = new Class(classNumber, s0, classTeacher, classPresident);
	classes[classNumber] = clas;
	return clas;
}
Class* School::CreateClass(int classNumber, Student* s0, Student* s1, ClassTeacher* classTeacher, Student* classPresident)
{
	Class* clas = new Class(classNumber, s0, s1, classTeacher, classPresident);
	classes[classNumber] = clas;
	return clas;
}
Class* School::CreateClass(int classNumber, Student* s0, Student* s1, Student* s2, ClassTeacher* classTeacher, Student* classPresident)
{
	Class* clas = new Class(classNumber, s0, s1, s2, classTeacher, classPresident);
	classes[classNumber] = clas;
	return clas;
}
Class* School::CreateClass(int classNumber, Student* s0, Student* s1, Student* s2, Student* s3, ClassTeacher* classTeacher, Student* classPresident)
{
	Class* clas = new Class(classNumber, s0, s1, s2, s3, classTeacher, classPresident);
	classes[classNumber] = clas;
	return clas;
}