#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Student
{
private:
	string name;
	int personalNumber;
public:
	Student(string name, int personalNumber);
	string getName();
	int getPersonalNumber();
};

