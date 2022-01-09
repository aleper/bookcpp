/*
* File: Employee.hpp
* Brief: Inteface da Classe Employee sugerida no Ex 03 14
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include <string>
using std::string;

class Employee{
public:
	Employee (string name, string lastName, int salary);
	void setName(string);
	void setLastName(string);
	void setSalary(int);
	string getName();
	string getLastName();
	int getSalary();
	int annualSalary();
	void givePayRise(int percent);
private:
	string name;
	string lastName;
	int salary;
};
