/*
* File: Ex03_15.cpp
* Brief: Programa Teste da Classe Date
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include "Date.hpp"

int main(){
	std::cout << "Criada data1 5 - 13 - 1971" << std::endl;
	Date date1(5,13,1971);
	date1.displayDate();
	std::cout << "\nCorrigido mês para -1" << std::endl;
	date1.setMonth(-1);
	date1.displayDate();
	std::cout << "\nCorrigido mês para 8" << std::endl;
	date1.setMonth(8);
	date1.displayDate();
	std::cout << "" << std::endl;
	return 0;
}
