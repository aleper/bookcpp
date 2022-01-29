#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Inicializar Variaveis
int counter = 1;
int largest = 0;
int other = 0;
int number;

int main(){
	// Executar loop 10 vezes
	while (counter <=10) {
		// Entra numero
		cout << " Entre número : ";
		cin >> number;

		if (number > other) {
			// Testa se number > largest > other
			if (number > largest) {
				other = largest;
				largest = number;
			// Testa se largest > number > other
			} else {
				other = number;
			}
		} // Senão não faça nada

		// Incrementa counter em 1
		counter++;
	}
	// Imprime maiores e Termina
	cout << " Os números maiores são " << other 
		<< " e "  << largest << endl;
	return 0;
}
