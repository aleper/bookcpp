// Exercício 4.21: ex04_21.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;
int main()
{
int count = 1; // inicializa a contagem

while ( count <= 10 ) // faz o loop 10 vezes
{
// saída da linha de texto
// Foi colocado parenteses em count % 2
cout << ((count % 2) ? "****" : "++++++++") << endl; 
count++; // incrementa a contagem
} // fim do while
return 0; // indica terminação bem-sucedida
} // fim de main
