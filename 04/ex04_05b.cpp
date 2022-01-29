/*
* File: ex04_02a.cpp
* Brief: Calculando a soma de numeros sucessivos. 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>

int main(){
	int x = 0;
	int n = 0;
	int som;
	
	std::cout << "Digite un numero : ";
	std::cin >> som;

	while (n < som) {
		x += ++n;
	}
	
	std::cout << "A Soma dos numeros inteiros sucessivos até o numero "<< n <<" é : " << x << std::endl;

	return 0;
}

