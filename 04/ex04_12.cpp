// Exercício 4.12: ex04_12.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int y; // declara y
	int x = 1; // inicializa x
	int total = 0; // inicializa o total
	while ( x <= 10 ){ // faz o loop 10 vezes
		y = x * x; // realiza os cálculos
		cout << y << endl; // gera a saída dos resultados
		total += y; // adiciona y a total
		x++; // incrementa o contador x
	} // fim do while
	cout << "Total is" << total << endl; // exibe o resultado
	return 0; // indica terminação bem-sucedida
} // fim de main

