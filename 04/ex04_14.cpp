/*
* File: ex04_14.cpp
* Brief: Cálcula novo Saldo e se Ultrapassou Limite de Crédito
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Declaração de variáveis
int conta;
double saldo;
double debitos;
double creditos;
double limite;

int main(){
	// Entra nova conta ou sentinela
	cout << "Entre número da conta (-1 para Sair): ";
	cin >> conta;
	while (conta != -1) {	// Se não digitada a Sentinela executa bloco
		// Entre outras variaveis
		cout << "Entre saldo inicial : ";
		cin >> saldo;
		cout << "Entre total de taxas : ";
		cin >> debitos; 
		cout << "Entre total de créditos : ";
		cin >> creditos;
		cout << "Entre limite de crédito : ";
		cin >> limite;

		// Calcula Novo Saldo
		saldo = saldo + debitos - creditos;

		// Exibe novo Saldo	
		cout << "Novo Saldo :\t" << saldo 
			<< "Conta :\t" << conta
			<< "\nLimite de Crédito :\t" << limite
			<< "\nSaldo :\t" << saldo << endl;

		// Se ultrapassado o Limite é mostrada Mensagem
		if (saldo > limite) {
			cout << "Limite de Crédito Ultrapassado !" << endl;
		}

		// Entra nova conta ou sentinela
		cout << "Entre número da conta (-1 para Sair): ";
		cin >> conta;
	}
	return 0;
}
