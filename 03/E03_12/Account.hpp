/*
* File: Account.hpp
* Brief: Interface da Classe de uma Conta sugerida no Ex 03-12
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

class Account{
public:
	Account (int initial);
	int getBalance();
	void credit(int value);
	void debit(int value);
private:
	int balance;
};
