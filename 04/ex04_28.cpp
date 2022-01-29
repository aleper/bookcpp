/*
* File: ex04_28.cpp
* Brief: Imprime padrão tabuleiro  conforme sugerido no exercício 
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream>
using std::cout;
using std::endl;

// Declaração de variáveis
int col;
int row = 1;

int main(){
	// Faz varedura das linhas até 7 linhas
	while (row < 8) {
		
		// Imprime linha
		col = 0;

		// Faz Varredura nas Colunas até 14 coluna
		while (col < 14) {

			// Gera padrão de Tabuleiro 
			if ((col + row) % 2) {
				cout << "*";
			} else {
				cout << " ";
			}
			col++;
		}

		// Imprime fim de linha
		cout << endl;
		// Muda Linha
		row++;	
	}
	return 0;
}
