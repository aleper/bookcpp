#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int count;
	int num;
	int menor;
	cout << "Quantidade de Elementos : ";
	cin >> count;
	cout << "Entre Elemento : ";
	cin >> menor;
	for (int i = 1; i < count; i++){
		cout << "Entre Elemento : ";
		cin >> num;
		if (num < menor){
			menor = num;
		}	
	}
	cout << "O menor número é " << menor << endl;
	return 0;
}
