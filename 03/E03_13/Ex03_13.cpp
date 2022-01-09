/*
* File: Ex03_13.cpp
* Brief: Arquivo de teste da Classe Invoice
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

#include "Invoice.hpp"

int main(){
	std::cout << "Criando invoice1." << std::endl;
	Invoice invoice1("E01","Lapis Borracha",-2,-2);
	std::cout << invoice1.getId() << std::endl;
	std::cout << invoice1.getDescription() << std::endl;
	std::cout << invoice1.getAmount() << std::endl;
	std::cout << invoice1.getPrice() << std::endl;
	std::cout << invoice1.getInvoiceAmount() << std::endl;
	std::cout << "" << std::endl;
	invoice1.setAmount(2);
	invoice1.setPrice(2);
	std::cout << invoice1.getId() << std::endl;
	std::cout << invoice1.getDescription() << std::endl;
	std::cout << invoice1.getAmount() << std::endl;
	std::cout << invoice1.getPrice() << std::endl;
	std::cout << invoice1.getInvoiceAmount() << std::endl;


	return 0;
}
