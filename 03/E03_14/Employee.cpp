/*
* File: Employee.cpp
* Brief: Implementação da Classe Employee
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

#include "Employee.hpp"

/*
* @brief: The Class Constructor of Employee
* @param: string name_
*       : string lastName_
*       : int salary_
*/
Employee::Employee(string name_, string lastName_, int salary_){
	setName(name_);
	setLastName(lastName_);
	setSalary(salary_);
}

/*
* @brief: Função Set de name
* @param: string value
* @return: void
*/
void Employee::setName(string value){
	name = value;
}

/*
* @brief: Função Set de lastName
* @param: string value
* @return: void
*/
void Employee::setLastName(string value){
	lastName = value;
}

/*
* @brief: Função Set de salary
* @param: int value
* @return: void
*/
void Employee::setSalary(int value){
	if (value < 0) {
		salary = 0;
		std::cout << "Negative value not allowed !" << std::endl;
	}
	if (value >= 0) {
		salary = value;
	}
}

/*
* @brief: Função Get de name
* @param: 
* @return: string
*/
string Employee::getName(){
	return name; 
}

/*
* @brief: Função Get de lastName
* @param: 
* @return: string
*/
string Employee::getLastName(){
	return lastName; 	
}

/*
* @brief: Função Get de salary
* @param: 
* @return: int
*/
int Employee::getSalary(){
	return salary; 	
}

/*
* @brief: Retorna Salário Anual do Empregado
* @param: 
* @return: int
*/
int Employee::annualSalary(){
	return salary * 12;
}

/*
* @brief: Reajusta Percentualmente o Salário do Empregado
* @param: int value
* @return: void
*/
void Employee::givePayRise(int value){
	setSalary(getSalary() * (100 + value) / 100);
}

