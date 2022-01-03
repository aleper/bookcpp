#include <iostream>

int main()
{
	//Declaração de variavéis
	int number1;
	int number2;
	//int sum;
	
	//Entrada de Números
	std::cout << "Entre o Primeiro Número: ";
	std::cin >> number1;
	std::cout << "Entre o Segundo Número:  ";
	std::cin >> number2;
	
	//Soma dos Números
	//sum = number1 + number2;
	
	//Saida do Resultado
	//std::cout << "A Soma é : " << sum << std::endl;
	std::cout << "A Soma é : " << number1 + number2 << std::endl;
	
	//Fim
	return 0;
}
