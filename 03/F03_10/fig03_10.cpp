/*
 * fig03_10.cpp
 * 
 * Copyright 2021 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 */
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 CS102 Data Structures in C++");
	GradeBook gradeBook3("CS103 TEste");
	
	cout << "gradeBook1 for course : " << gradeBook1.getCourseName() << endl;
	cout << "gradeBook2 for course : " << gradeBook2.getCourseName() << endl;
	cout << "gradeBook3 for course : " << gradeBook3.getCourseName() << endl;
	
	return 0;
}


