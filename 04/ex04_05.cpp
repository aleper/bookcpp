/*
* File: ex04_02a.cpp
* Brief: Calculando a soma de 1 até 10 usando while e 
* terminando com o x = 11
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

int main(){
	int x = 1;
	int sum = 0;

	while (x <= 10) {
		sum += x++;
		std::cout << "The sum is: "<< sum << std::endl;
	}

	return 0;
}

