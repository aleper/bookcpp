/*
* File: ex04_30.cpp
* Brief: Exercicio de um programa que calcula o perimetro e a 
* área de uma circunferência
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Declaração de Variáveis
double raio;
double pi = 3.14159;

int main(){
	// Entra Raio
	cout << "Entre o Raio : ";
	cin >> raio;

	// Calcula e Imprime resultado
	cout << "Raio :\t\t" << raio << endl
		<< "Perimetro :\t" << 2 * pi * raio << endl 
		<< "Área :\t\t" << raio * raio * pi << endl;

	return 0;
}
