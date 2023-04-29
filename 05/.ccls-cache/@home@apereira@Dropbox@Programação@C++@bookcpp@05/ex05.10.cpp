#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int count = 20;
	long res = 1;
	for (int i = 1; i < count; ++i){
		res = res * ( i + 1 );
		cout << i + 1 << "\t" << res << endl ;
	}
	cout << res << endl;
	return 0;
}

// Variavel res não pode usar tipo int
