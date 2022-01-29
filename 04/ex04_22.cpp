// Exercício 4.22: ex04_22.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;
int main()
{
int row = 10; // inicializa a linha
int column; // declara a coluna
while ( row >= 1 ) // faz loop até linha < 1
{
	column = 1; // configura coluna como 1 quando a iteração inicia
	while ( column <= 10 ) // faz o loop 10 vezes
	{
		// Tive que colocar parenteses em row % 2
		cout <<  ((row % 2) ? "<" : ">") ; // saída
		column++; // incrementa coluna
	} // fim do while interno
	row--; // decrementa linha
	cout << endl; // inicia nova linha de saída
} // fim do while externo
return 0; // indica terminação bem-sucedida
} // fim de main
