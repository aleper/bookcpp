/*
* File: Ex03_14.cpp
* Brief: Arquivo de teste da Classe Employee
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include "Employee.hpp"

int main(){
	std::cout << "* Criação de employee1 com -4000" << std::endl;
	Employee employee1("Alexandre", "Pereira",-4000);
	std::cout << "Nome\t" << "\t" 
		<< "Sobrenome" << "\t " 
		<< "Salário" << "\t"
		<< "Salário Anual" << std::endl;
	std::cout << employee1.getName() << "\t" 
		<< employee1.getLastName() << "\t\t" 
		<< employee1.getSalary() << "\t\t"
		<< employee1.annualSalary() << std::endl;

	std::cout << "* Correção para 4000" << std::endl;
	employee1.setSalary(4000);
	std::cout << "* Criação de employee2 com 2000" << std::endl;
	Employee employee2("Marcos", "Araujo",2000);
	std::cout << employee1.getName() << "\t" 
		<< employee1.getLastName() << "\t\t" 
		<< employee1.getSalary() << "\t\t"
		<< employee1.annualSalary() << std::endl;
	std::cout << employee2.getName() << "\t\t" 
		<< employee2.getLastName() << "\t\t" 
		<< employee2.getSalary() << "\t\t"
		<< employee2.annualSalary() << std::endl;

	std::cout << "* Reajuste de 10%" << std::endl;
	employee1.givePayRise(10);		
	employee2.givePayRise(10);		
	std::cout << employee1.getName() << "\t" 
		<< employee1.getLastName() << "\t\t" 
		<< employee1.getSalary() << "\t\t"
		<< employee1.annualSalary() << std::endl;
	std::cout << employee2.getName() << "\t\t" 
		<< employee2.getLastName() << "\t\t" 
		<< employee2.getSalary() << "\t\t"
		<< employee2.annualSalary() << std::endl;
	return 0;
}
