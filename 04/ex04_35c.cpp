#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip> 
using std::setprecision;

// Declaração Variaveis Globais
int number;
int x;
double ex;
double ini;

// Função que calcula o Fatorial
double fatorial(double x){
	double fat = x;	
	while (x > 1) {
		fat *= --x;
	}
	return fat;
}

// Função que Calcula Potencia
double potencia(double base, int exp){
	double pot = base;
	while (exp > 1) {
		pot *= base;
		exp--;
	}
	return pot;
}

int main(){
	// Entrada da precisão e x
	cout << "Entre precisão: ";
	cin >> number;
	cout << "Entre x: ";
	cin >> x ;

	// Calcula "e" com a precisão entrada
    ini = x;	
	ex = 1 + x;
	while (number > 1) {
		ex += ( (potencia(x, number) ) / fatorial(number) );
		number--;
	}	

	// Exibe Resultado
	cout << "e exp " << ini << " = " << setprecision(0)<<fixed;	
	cout << setprecision(20)<< ex << endl;
		
	return 0;
}
