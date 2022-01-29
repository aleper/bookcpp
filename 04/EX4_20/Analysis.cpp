/*
* File: Analysis.cpp
* Brief: Implementação da Classe que testa alunos
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
#include "Analysis.h"

/*
* @brief: Função unica desta classe
* @param: 
* @return: void
*/
void Analysis::processExamResults(){
	int passes = 0;
	int failures = 0;
	int studentCount = 1;
	int result;

	while (studentCount <= 10) {
		std::cout << "Enter Result (1 = pass, 2 = fail): ";
		std::cin >> result;
		if (result == 1) {
			passes = passes + 1;
			studentCount = studentCount + 1;
		} else if(result == 2){
			failures = failures + 1;
			studentCount = studentCount + 1;
		} else {
			std::cout << "Valor Digitado Invalido!" << std::endl;
		} 
	}
	std::cout << "Passed " << passes << "\nFailed " << failures << std::endl;

	if (passes > 8) {
		std::cout << "Raise Tuition " << std::endl;
	}
}
