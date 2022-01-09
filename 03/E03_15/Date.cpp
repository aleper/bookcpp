/*
* File: Date.cpp
* Brief: Implementação da Classe Date do Ex 03 15
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
#include "Date.hpp"

/*
* @brief: The Class Constructor of Date
* @param: int day_
*       : int month_
*       : int year_
*/
Date::Date(int day_,int month_,int year_){
	setDay(day_);
	setMonth(month_);
	setYear(year_);
}

/*
* @brief: Função Set de day
* @param: int value
* @return: void
*/
void Date::setDay(int value){
	day = value;
}

/*
* @brief: Função Set de moun
* @param: int value
* @return: void
*/
void Date::setMonth(int value){
	month = value;
	if (value > 12) {
		month = 1;
		std::cout << "Month value must be from 1 to 12 !" << std::endl;	
	}
	if (value < 1) {
		month = 1;
		std::cout << "Month value must be from 1 to 12 !" << std::endl;	
	}
}

/*
* @brief: Função Set de year
* @param: int value
* @return: void
*/
void Date::setYear(int value){
	year = value;
}

/*
* @brief: Função Get de day
* @param: 
* @return: int
*/
int Date::getDay(){
	return day;
}

/*
* @brief: Função Get de month
* @param: 
* @return: int
*/
int Date::getMonth(){
	return month;
}

/*
* @brief: Função Get de year
* @param: 
* @return: int
*/
int Date::getYear(){
	return year;
}

/*
* @brief: Função que exibe a Data
* @param: 
* @return: void
*/
void Date::displayDate(){
	std::cout << getDay() << "/" << getMonth() << "/" 
		<< getYear() ;
}
