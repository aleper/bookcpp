/*
* File: Date.hpp
* Brief: Interface da Classe date sugerida no Ex 03 15
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

class Date{
public:
	Date (int day, int month, int year);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void displayDate();
private:
	int day;
	int month;
	int year; 
};
