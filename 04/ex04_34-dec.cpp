/*
* File: ex04_34.cpp
* Brief: Faz decriptação tornando os dois ultimos digitos em 
* primeiros e somando 3 a cada digito e aplicando modulo.
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
	
	in = (in % 100) * 100 + (in /100); 
	//cout << in << endl;

	while (x--) {
		out +=  (( (in % (10 * dec) / dec ) + 3 ) % 10 ) * dec;
		dec *= 10;
	}

	cout << out << endl;

	return 0;
}
