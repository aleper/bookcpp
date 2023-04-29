/*
* File: ex05.6.cpp
* Brief: Soma média de numeros entrados até 9999.
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cin;
using std::cout;
using std::endl;

int main(){
	int cont;
	int x = 0;
	int sum = 0;
	
	for ( cont = -1; x != 9999 ; cont++) {
		cin >> x;
		sum +=  x;
	}

	sum -= 9999;
	//cout << sum << "\t" << cont << endl;

	cout << "Média: " << static_cast<double>(sum)/cont << endl;

	return 0;
}
