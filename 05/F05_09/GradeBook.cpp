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
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
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
	else{
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

/*
* @brief: Conta notas fornecidas pelo usuario
* @param: 
* @return: void
*/
void GradeBook::inputGrades(){
	int grade;
	std::cout << "Enter the letter grades. " << std::endl
		<< "Enter the EOF charter to end input." << std::endl;
	while ((grade = std::cin.get()) != EOF ) {
		switch (grade) {
			case 'A':
			case 'a':
				aCount++;
				break;

			case 'B':
			case 'b':
				bCount++;
				break;

			case 'C':
			case 'c':
				cCount++;
				break;

			case 'D':
			case 'd':
				dCount++;
				break;

			case 'F':
			case 'f':
				fCount++;
				break;

			case '\t':
			case '\n':
			case ' ':
				break;

			default:
				std::cout << "Incorrect letter grade entered.\n" 
					<< "Enter new grade." <<std::endl;
				break;
		}	
	}
}

/*
* @brief: Mostra Relatório com a Contagem das Notas de cada Tipo
* @param: 
* @return: void
*/
void GradeBook::displayGradeReport(){
	std::cout << "\n\nNumber of students who received each letter grade:"
	   << "\nA: " << aCount	
	   << "\nB: " << bCount	
	   << "\nC: " << cCount	
	   << "\nD: " << dCount	
	   << "\nF: " << fCount	
		<< std::endl;
}
