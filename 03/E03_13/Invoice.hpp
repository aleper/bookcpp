/*
* File: Invoice.hpp
* Brief: Interface da Classe Fatura sugerida no Ex 03 13
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include <string>
using std::string;

class Invoice{
public:
	Invoice (string id, string description, int amount, int price);
	void setId(string value);
	void setDescription(string value);
	void setAmount(int value);
	void setPrice(int value);
	string getId();
	string getDescription();
	int getAmount();
	int getPrice();
	int getInvoiceAmount();
private:
	string id;
	string description;
	int amount;
	int price;
};
