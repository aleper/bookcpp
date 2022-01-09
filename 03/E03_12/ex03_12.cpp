/*
* File: ex03_12.cpp
* Brief: Programa teste da classe Account
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include "Account.hpp"

int main(){
	std::cout << "* Criando conta1 = -5" << std::endl;
	Account conta1(-5);
	std::cout << "conta1 = " << conta1.getBalance() << std::endl;
	std::cout << "* Criando conta2 = 5" << std::endl;
	Account conta2(5);
	std::cout << "conta2 = " << conta2.getBalance() << std::endl;


	std::cout << "* Somado 5 a conta1." << std::endl;
	conta1.credit(5);
	std::cout << "conta1 = " << conta1.getBalance() << std::endl;

	std::cout << "* Debitado 5 da conta2" << std::endl;
	conta2.debit(5);
	std::cout << "conta2 = " << conta2.getBalance() << std::endl;

	std::cout << "* Debitado 2 da conta2" << std::endl;
	conta2.debit(2);
	std::cout << "conta2 = " << conta2.getBalance() << std::endl;
	return 0;
}
