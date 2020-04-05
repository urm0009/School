#pragma once
#include "Student.h"
#include "ClassTeacher.h"
class Class
{
private:
	int classNumber;
	Student* student;	
	Student* classPresident;
	ClassTeacher* classTeacher;
public:
	Class(int classNumber, Student* s0, ClassTeacher* classTeacher, Student* classPresident);
	Class(int classNumber, Student* s0, Student* s1, ClassTeacher* classTeacher, Student* classPresident);
	Class(int classNumber, Student* s0, Student* s1, Student* s2, ClassTeacher* classTeacher, Student* classPresident);
	Class(int classNumber, Student* s0, Student* s1, Student* s2, Student* s3, ClassTeacher* classTeacher, Student* classPresident);
	int getClassNumber();
	Student* GetStudent();
};

