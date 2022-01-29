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
* @brief: Calcula a Média dos 10 Alunos da Turma
* @param: 
* @return: void
*/
void GradeBook::determineClassAverage(){
	int total = 0;
	int gradeCounter = 1;
	int grade;
	int average;

	while(gradeCounter <= 10){
		std::cout << "Enter Grade : ";
		std::cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}
	average = total / 10;
	std::cout << "Total of All 10 Grades is "<< total << std::endl;	
	std::cout << "Class Average is " << average << std::endl;
}
