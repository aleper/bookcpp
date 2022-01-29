/*
* File: ex04_32-33.cpp
* Brief: Programa que testa se 3 doubles podem fazer parte de um 
* triangulo e se ele é retangulo .
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Declaração de variaveis
double a = 0;
double b = 0;
double c = 0;
double in;

int main(){
	// Entra 1º Numero
	while (a <= 0) {
		cout << "Entre 1º numero diferente de 0 : ";
		cin >> a;
	}
	
	// Entra 2º numero e testa se ele é maior que o 1º 
	in = 0;
	while (in <= 0) {
		cout << "Entre 2º numero diferente de 0 : ";
		cin >> in;
	}
	if (in > a) {
		b = a;
		a = in;
	} else {
		b = in;
	}

	// Entra 3º numero e testa se ele é maior que todos
	in = 0;
	while (in <= 0) {
		cout << "Entre 3º numero diferente de 0 : ";
		cin >> in;
	}
	if (in > a) {
		c = a ;
		a = in;
	} else {
		c = in;
	}

	// Exibe o maior numeros 
	cout << a << " > " << b << " ou " << c << endl;

	// Testa se numeros podem fazer parte de um triangulo
	if ((b + c) > a) {
		cout << "Numeros podem ser lados de um triangulo."<< endl;	
		
		// Testa se numeros fazer parte de um triangulo retangulo
		if ((b * b + c * c) == (a * a)) {
			cout << "E fazem parte de um triangulo retangulo !"	<< endl;
		} else {
			cout << "E não fazem parte de um triangulo retangulo !"<< endl;
		}
		cout << endl;
	// Senão Mostra mensagem
	} else {
		cout << "Numeros não podem ser lados de um triangulo." << endl;	
	}

	return 0;
}
