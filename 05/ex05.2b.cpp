/*
* File: ex05.2b.cpp
* Brief: Formatar numero double com diferentes saidas
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::endl;
using std::fixed;
using std::left;

#include <iomanip> 
using std::setw;
using std::setprecision;

int main(){
	double a = 333.546372;
	cout << fixed << left;
	cout << setw(15) << setprecision(1) << a  
		<< setw(15) << setprecision(2) << a
		<< setw(15) << setprecision(3) << a
		<< endl;	
	return 0;
}
