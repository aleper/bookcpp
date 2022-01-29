/*
* File: fig04_12.cpp
* Brief: Arquivo teste da Classe GradeBook
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CS101 C++ Programming");
	gradeBook1.displayMessage();
	gradeBook1.determineClassAverage();
		
	return 0;
}

