/*
* File: fig03_17.cpp
* Brief: Arquivo teste da Classe GradeBook
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structures");
	
	std::cout << "gradeBook1 is : " << gradeBook1.getCourseName() << std::endl;
	std::cout << "gradeBook2 is : " << gradeBook2.getCourseName() << std::endl;

	gradeBook1.setCourseName("CS101 C++ Programming");

	std::cout << "gradeBook1 is : " << gradeBook1.getCourseName() << std::endl;
	std::cout << "gradeBook2 is : " << gradeBook2.getCourseName() << std::endl;
	return 0;
}

