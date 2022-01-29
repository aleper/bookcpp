/*
* File: ex04_02b.cpp
* Brief: Pequeno exercicio de X ter o mesmo avanço por linha
* Para treinar incremento sugerido no exercicio
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include <iostream>
using std::cout;

int n = 40; // Caracteres em branco maximo que serão impressos

// Tipo de retorno
//char ret = '\r';
char ret = '\n';

void apagaLinha()
{
	int z = 0;  
	while (z++ != (n + 1)) {
		cout << " ";
	}
	cout << ret;
}

void imprimeBrancos(int y)
{
	while (0 != y--) {
		cout << " ";
	}
}

int main(){
	int x = 0;  // Conta o "Avanço" do X

	// Avança o X a cada loop
	while ( x != n ) {
		imprimeBrancos(x++);
		cout << "X" << ret;
//		apagaLinha();
	}

	// Retorna o X a cada loop
	while ( x != 0 ) {
		imprimeBrancos(x--);
		cout << "X" << ret;
//		apagaLinha();
	}

	cout <<"\n";
	return 0;
}
