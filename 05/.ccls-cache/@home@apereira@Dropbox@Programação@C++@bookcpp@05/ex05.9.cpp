#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int count = 15;
	int res = 1;
	for (int i = 1; i < count; ++i){
		if ( ( i + 1 ) % 2 ) {
			res = res * ( i + 1 );
			//cout << i + 1 << "\t" << res << endl;
		}
	}
	cout << res << endl;
	return 0;
}
