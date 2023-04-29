/*
* File: ex05.2d.cpp
* Brief: Imprimir de 1 a 20 , 5 numeros por linha e separados por tab
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::endl;

int main(){
	int x = 1;
	while (x <= 20) {
		cout << x;
		if (x % 5) {
			cout << "\t";
		} else {
			cout << endl;
		}
		x++;	
	}

	return 0;
}
