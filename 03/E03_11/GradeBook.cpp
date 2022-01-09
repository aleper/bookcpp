/*
* File: GradeBook.cpp
* Brief: Funções-Membro da Classe GradeBook 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
#include "GradeBook.h"

/**
* @brief: The Class Constructor of GradeBook
* @param: string name, string present
*/
GradeBook::GradeBook(string name,string present)
{
	setCourseName(name);
	setInstructor(present);
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

/*
* @brief: Set Function of instructor
* @param: string name
* @return: void
*/
void GradeBook::setInstructor(string name){
	instructor = name; 
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

/*
* @brief: Get Function of Instructor
* @param: 
* @return: string
*/
string GradeBook::getInstructor(){
	return instructor;
}

/**
* @brief: Mostra courseName
* @param: 
* @return: void
*/
void GradeBook::displayMessage()
{
	std::cout << "Welcome to the grade book for\n" << getCourseName() << std::endl;
	std::cout << "This course is presented by\n" << getInstructor() << std::endl;
}

