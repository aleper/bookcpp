/*
* File: ex05.5.cpp
* Brief: Entra n e soma n entradas e Retorna
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

int main(){
	int nsum;
	int result;

	result = 0;
	cin >> nsum;
	for ( int cont = 1; nsum >= cont; cont++) {
		int in;
		cin >> in;
		result += in;
	}

	cout << result << endl;
	return 0;
}

