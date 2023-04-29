/*
* File: ex05.2e.cpp
* Brief: Imprimir numeros de 1 a 20 , com 5 em cada linha com for
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::endl;

int main(){
	int x;
	for (x = 1; 20 >= x; x++) {
		cout << x;
		if (x % 5) {
			cout << "\t";
		} else {
			cout << endl;
		}
	}
	return 0;
}
