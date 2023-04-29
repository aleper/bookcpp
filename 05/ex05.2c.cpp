/*
* File: ex05.2c.cpp
* Brief: Calcular 2,5 elevado a 3 e imprimir com largura 10 
* e precisão 2
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip> 
using std::setw;
using std::setprecision;

#include <cmath> 

int main(){
	double x = pow(2.5,3);
	cout << setprecision(2) << setw(10) << fixed << x << endl;

	return 0;
}
