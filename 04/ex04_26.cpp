/*
* File: ex04_26.cpp
* Brief: Testa se numero com 5 algarismos é palindromo 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>		

using std::cout;
using std::cin;
using std::endl;

// Declaração de Variaveis
int x;
int x1;
int x2;

int main(){
	// Entra numero
	cout << "Entre numero com 5 algarismos : ";
	cin >> x;

	// Testa se o numero tem cinco algarismos
	x1 = x / 10000;
	x2 = x / 100000;
	if (x1 != 0 ){
		if (x2 == 0) {

			// Testa se o primeiro algarismo é igual ao ultimo
			x1 = (x % 10) / 1;
			x2 = (x % 100000) / 10000;
			if (x1 == x2){

				// Testa se o terceiro algarismo é igual ao quarto
				x1 = (x % 100) / 10;
				x2 = (x % 10000) / 1000;
				
				// Se sim imprime Palindromo
				if (x1 == x2){
					cout << "É um palindromo !";

				// Senão imprime não é Palindromo	
				} else {
					cout << "Não é um palindromo !";
				}

			} else {
				cout << "Não é um palindromo !";
			}

		// Se numero de algarismo não for 5 imprima erro
		} else {
			cout << "Numero com muitos algarismos";
		}
	} else {
		cout << "Numero com poucos algarismos";
	}
	
	// Imprime fim de linha	
	cout << endl;
	
	return 0;
}
