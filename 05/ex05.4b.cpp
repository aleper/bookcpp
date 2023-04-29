/*
* File: ex05.4b.cpp
* Brief: Correção da Proposta do exercicio.
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream> 

int main(){
	int x = 11;
	std::cout << x;
	switch (x%2) {
		case 0:
			std::cout << " Par" << std::endl;
			break;
		default:
			std::cout << " Impar" << std::endl;
	}

	return 0;
}
