/*
* File: Invoice.cpp
* Brief: Protótipo de Funções da Classe Invoice
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

#include "Invoice.hpp"

/*
* @brief: The Class Constructor of Invoice
* @param: string id_
*       : string description_
*       : int amount_
*       : int price_
*/
Invoice::Invoice(string id_, string description_, int amount_, int price_){
	setId(id_);
	setDescription(description_);
	setAmount(amount_);
	setPrice(price_);
}

/*
* @brief: Função Set para id
* @param: string value
* @return: void 
*/
void Invoice::setId(string value){
	id = value;
}

/*
* @brief: Função Set para description
* @param: string value
* @return: void
*/
void Invoice::setDescription(string value){
	description = value;
}

/*
* @brief: Função Set para amount
* @param: int value
* @return: void
*/
void Invoice::setAmount(int value){
	if (value < 0) {
		amount = 0;
		std::cout << "Negative value not allowed !" << std::endl;
	}
	if (value >= 0) {
		amount = value;
	}
}

/*
* @brief: Função Set para price
* @param: int value
* @return: void
*/
void Invoice::setPrice(int value){
	if (value < 0) {
		price = 0;
		std::cout << "Negative value not allowed !" << std::endl;
	}
	if (value >= 0) {
		price = value;
	}
}

/*
* @brief: Função Get para id
* @param: 
* @return: string
*/
string Invoice::getId(){
	return id;
}

/*
* @brief: Função Get para description
* @param: 
* @return: string
*/
string Invoice::getDescription(){
	return description;
}

/*
* @brief: Função Get para amount
* @param: 
* @return: int
*/
int Invoice::getAmount(){
	return amount;
}

/*
* @brief: Função Get para price
* @param: 
* @return: int
*/
int Invoice::getPrice(){
	return price;
}

/*
* @brief: Retorna Produto de amount e price
* @param: 
* @return: int
*/
int Invoice::getInvoiceAmount(){
	return amount * price;
}
