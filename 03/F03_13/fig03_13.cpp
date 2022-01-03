/*
 * fig03_13.cpp
 * 
 * Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 */

#include <iostream>
using std::cout;
using std::endl;

#include "gradebook.hpp"

int main()
{
	GradeBook myGradeBook1("CS101 Introduction to C++ Programming");
	GradeBook myGradeBook2("CS102 Data Structures in C++");
	
	cout << "myGradeBook1 for : " << myGradeBook1.getCourseName() << endl;
	cout << "myGradeBook2 for : " << myGradeBook2.getCourseName() << endl;
	
	return 0;
}

