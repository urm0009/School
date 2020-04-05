#pragma once
#include "Class.h"
class School
{
private:
	Student** students;
	int studentsCount;

	Class** classes;
	int classesCount;

	ClassTeacher** classTeachers;
	int classTeachersCount;

public:
	School(int s, int c, int t);
	~School();
	Student* GetStudent(int pn);
	ClassTeacher* GetClassTeacher(int pn);
	Class* GetClass(int cn);
	

	Student* CreateStudent(int pc, string n);
	ClassTeacher* CreateClassTeacher(int pn, string n);
	Class* CreateClass(int classNumber, Student* s0, ClassTeacher* classTeacher, Student* classPresident);
	Class* CreateClass(int classNumber, Student* s0, Student* s1, ClassTeacher* classTeacher, Student* classPresident);
	Class* CreateClass(int classNumber, Student* s0, Student* s1, Student* s2, ClassTeacher* classTeacher, Student* classPresident);
	Class* CreateClass(int classNumber, Student* s0, Student* s1, Student* s2, Student* s3, ClassTeacher* classTeacher, Student* classPresident);
};

