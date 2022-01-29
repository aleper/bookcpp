/*
* File: GradeBook.cpp
* Brief: Funções-Membro da Classe GradeBook 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
using std::fixed;

#include <iomanip>
using std::setprecision;

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
	int gradeCounter = 0;
	int grade;
	double average;

	std::cout << "Enter Grade or -1 to quit: ";
	std::cin >> grade;

	while(grade != -1){
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		std::cout << "Enter Grade or -1 to quit: ";
		std::cin >> grade;
	}
	if (gradeCounter != 0) {
		// Operador de coerção unário static_cast faz uma conversão explicita de "total" para ponto 
		// flutuante temporário double e conversão implicita (promoção) de "gradeCounter" para double
		average = static_cast< double >(total) /gradeCounter;

		std::cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << std::endl;
		// average sem setprecision(2) e sem fixed mostra numero de casas decimais variaveis sendo 4 no maximo	
		std::cout << "Class average is " << average << std::endl;

		//setprecision(2) antes de fixed mostra como int
		//std::cout << "Class average is " << setprecision(2) << average << std::endl;
		// e manteve . Aparenta que sem fixed seta numero de casas flutuantes para 0	
		//std::cout << "Class average is " << average << std::endl;

		// fixed usado antes de setprecision , mostra 6 casas decimais
		// fixed iniciou mostrar pontos fixos de casas decimais (só foi necessario um vez)
		std::cout << "Class average is " << fixed << average << std::endl;

		// setprecision(3) apos fixed muda para 3 casas decimais
		// e setprecision setou o numero de casas no momento em que foi usado
		std::cout << "Class average is " << setprecision(3) << average << std::endl;

		// average com setprecision(2). Precisa de #include<iomanip> . Conforme ilustra o livro 
		std::cout << "Class average is " << setprecision(2) << fixed << average << std::endl;
	} else 
		std::cout << "No grades were entered !" << std::endl;	
}
