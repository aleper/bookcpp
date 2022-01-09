/*
* File: Account.cpp
* Brief: Implementação da Classe Account sugerida no Ex 03-12
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include "Account.hpp"

/*
* @brief: The Class Constructor of Account
* @param: int initial
*/
Account::Account(int initial){
	if (initial < 0) {
		balance = 0;	
		std::cout << "Initial value cannot be negative !" << std::endl;	
	}
	if (initial >= 0) {
		balance = initial;
	}
}

/*
* @brief: Return the balance of Account
* @param: 
* @return: int
*/
int Account::getBalance(){
	return balance;
}

/*
* @brief: Adding value to balance
* @param: int value
* @return: void
*/
void Account::credit(int value){
	balance = balance + value;
}

/*
* @brief: Subtract balance amount
* @param: int value
* @return: void
*/
void Account::debit(int value){
	if (value > balance) {
		std::cout << "Debit ammount exceeded account balance !" << std::endl;
	}
	if (value <= balance) {
		balance = balance - value;
	}
}
