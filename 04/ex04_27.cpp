/*
* File: ex04_27.cpp
* Brief: Converte binario em decimal (funciona com até 10 digitos)
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

// Declara Variáveis
int num;
int test = 1;
int dec = 1;
int bin = 1;
int resp = 0;

int main(){
	// Entre Binario e atribua a num
	cout << "Entre um número binario : ";
	cin >> num;

	// Executa bloco enquanto test for difente de 0
	while (test != 0) {
		// Calcula valor em decimal do digito e adiciona a resposta
		resp += ( ( num % (10 * dec) / dec ) ) * bin;

		// Incrementa variavel dec e bin
		dec *= 10;
		bin *= 2;

		// Testa se ainda tem mais um digito para se calcular
		test = num / dec;
	}
	
	// Imprime resposta
	cout << "O decimal é : " << resp << endl;	

	return 0;
}
