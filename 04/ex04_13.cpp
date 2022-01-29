/*
* File: ex04_13.cpp
* Brief: Calcula Consumo , litros e kilometragem totais
* (Conforme sugerido no exercicio)
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Declaração de Variaveis
int km;
int lt;
int kmres = 0;
int ltres = 0;
double consumo; 

int main(){ 	
	// Aguarda Litros ou Sentinela
	cout << "Entre os litros consumidos (0 para Sair): ";
	cin >> lt;
	while (lt != 0) { 	// Enquanto não for 0 ele executa bloco
		// Entra Kilometragem
		cout << "* Entre a kilometragem: ";
		cin >> km;

		// Faz calculos de consumo e Kilometragem e Consumo Totais
		consumo = static_cast< double >(km) / lt;
		kmres += km;
		ltres += lt;

		// Exibe resultado
		cout << "=>\tRendimento : " << consumo << " km/l\tKilometragem Total : " 
			<< kmres << " km\tConsumo Total : " << ltres << " l" << endl; 

		// Aguarda Litros ou Sentinela
		cout << "* Entre os litros consumidos (0 para Sair): ";
		cin >> lt;
	}
	return 0;
}

