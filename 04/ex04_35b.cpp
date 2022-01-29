/*
* File: ex04_35a.cpp
* Brief: Exercicio que calcula "e" informando a precisão
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip> 
using std::setprecision;

// Declaração Variaveis Globais
int number;
double e = 1;

// Função que calcula o fatorial
double fatorial(double x){
	double fat = x;	
	while (x > 1) {
		fat *= --x;
	}
	return fat;
}

int main(){
	// Entrada da precisão
	//cout << "Entre precisão	: " << setprecision(20) << fixed;
	cout << "Entre precisão	: " << fixed;
	cin >> number;

	// Calcula "e" com a precisão entrada
	while (number != 0) {
		e += (1/fatorial(number));
		number--;
	}	
	
	// Imprime Resultado com a precisão de 20 casas decimais
	cout << setprecision(20) << fixed;
	cout << "e =  " <<  e << endl;
	
	return 0;
}
