/*
 * gradebook.cpp
 * 
 * Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 */
#include <iostream>
using std::cout;
using std::endl;

#include "gradebook.hpp"

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}
