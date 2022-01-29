/*
* File: ex04_15.cpp
* Brief: Programa de calculo de Comissão de vendas Sugerida no Exercício
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Declaração de variáveis
double vendas;
double salario;

int main(){
	// Entrando com as vendas ou a Sentinela
	cout << "Entre com as Vendas em Dolar (-1 para Sair):";
	cin >> vendas;

	// Se não for digitada Sentinela executa código do bloco
	while (vendas != -1) {
		// Calcula Salário
		salario = vendas * 0.09 + 200;

		// Exibe Salario
		cout << "Salário : $" << salario << endl;

		// Entrando com as vendas ou a Sentinela
		cout << "Entre com as Vendas em Dolar (-1 para Sair):";
		cin >> vendas;
	}
	return 0;
}
