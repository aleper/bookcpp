/*
* File: ex04_18.cpp
* Brief: Cria tabela sugerida no exercicio
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

using std::cout;
using std::endl;

// Declaração variaveis
int x = 1 ;

int main(){
	// Imprime Cabeçalho
	cout <<	"N\t10*N\t100*N\t1000*N\n" << endl;

	// Executa 5 vezes cada linha com os calculos
	while (x <= 5) {
		cout << x << "\t" << x*10 << "\t"
			<< x*100 << "\t" << x*1000 << endl;
		x++;
	}
	return 0;
}
