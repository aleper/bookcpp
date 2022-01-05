/*
* File: GradeBook.cpp
* Brief: Funções-Membro da Classe GradeBook 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
#include "GradeBook.h"

/**
* @brief: The Class Constructor of GradeBook
* @param: string name
*/
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

/**
* @brief: Set Function of courseName
* @param: string name
* @return: void
*/
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	if (name.length() > 25){
		//Limita courseName aos primeiros 25 caracteres e Da Aviso.
		courseName = name.substr(0,25);
		std::cout << "Name \"" << name << "\" exceeds maximum lenght (25)\n" << "Limiting courseName to first 25 characters.\n"  << std::endl;
	}
}

/**
* @brief: Get Function of courseName
* @param: 
* @return: string
*/
string GradeBook::getCourseName()
{
	return courseName;
}

/**
* @brief: Mostra courseName
* @param: 
* @return: void
*/
void GradeBook::displayMessage()
{
	std::cout << "Welcome to the grade book for\n" << getCourseName() << std::endl;
}

