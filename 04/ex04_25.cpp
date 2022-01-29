#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int line;
int column;
int x;

int main(){
	// Entrar número	
	cout << "Entre o número : ";
	cin >> x;
	cout << endl;
	
	if (x == 1) {
		cout << "*" << endl;
	} else {
		line = 0;
		// Enquanto x != line Imprime mais uma linha	
		while (x != line) {

			// Imprime Linha
			column = 0;
			if (line == 0) {
				// Linha Cheia 
				while (column != x) {
					cout << "*";
					column++;
				}	
			} else if ((line + 1) == x) {
				// Linha Cheia 
				while (column != x) {
					cout << "*";
					column++;
				}	
			} else {
				// Linha Vazada	
				while (column != x) {
					if (column == 0) {
						cout << "*";
					}if ((column + 2) == x) {
						cout << "*";
					} else {
						cout << " ";
					}
					column++;
				}	
			}
			cout << endl;
			// Incrementa line 	
			line++;
		}

	}
	return 0;
}
