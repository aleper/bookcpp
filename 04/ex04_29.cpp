/*
* File: ex04_29.cpp
* Brief: Testa o que acontece com loop infinito
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>		
	
using std::cout;
using std::endl;

int cont = 1;
int x = 2 ;

int main(){
	while (cont++ < 33) { // Aparenta imprimir até a variavel x estourar . Depois só imprime zeros .
//	while (true) {
		cout << (x *= 2) << endl;
	}
	return 0;
}
	
	

