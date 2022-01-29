/*
* File: ex04_34.cpp
* Brief: Faz encriptação somando 7 a cada digito e aplicando 
* modulo , e tornando os dois ultimos digitos em primeiros .
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

// Declaração de Variaveis
int in;
int x = 4;
int dec = 1;
int out = 0;

int main(){
	// Entre numero com 4 digitos .
	cout << "Entre numero com 4 digitos : ";
	cin >> in;
	
	// Varre todos algarismos e soma sete e tira o modulo , 
	// enquanto se prepara saida .
	while (x--) {
		out +=  (( (in % (10 * dec) / dec ) + 7 ) % 10 ) * dec;
		dec *= 10;
	}
	//cout << out << endl;

	// Troca as posições dos algarismos (Os dois primeiros 
	// se tornam os dois ultimos)
	out = (out % 100) * 100 + (out /100); 	
	cout << out << endl;

	return 0;
}
