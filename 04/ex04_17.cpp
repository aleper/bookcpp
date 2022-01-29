/*
* File: ex04_17.cpp
* Brief: Programa para escolher o maior numero de 10 digitados
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Declarar r Inicializar Variaveis
int counter = 1;
int largest = 0;
int number;

int main(){
	// Executar bloco por 10 vezes
	while (counter <= 10) {
		// Entre numero 
		cout << "Entre um número : ";
		cin >> number;

		// Se numero digitado for maior atribua a largest
		if (number > largest) 
			largest = number;

		// Incremente contador
		counter++;
	}
	// Imprima o maior encontrado
	cout << "O maior é : " << largest << endl;
	return 0;
}
