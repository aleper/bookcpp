#include <iostream> 
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip> 
using std::setw;
using std::setprecision;

#include <cmath> 
using std::pow;

int main(){
	double amount;
	double principal = 1000;
	double rate = 0.05;
	
	cout << "Year" << setw(21) << "Amount on deposit" << endl;

	cout << fixed << setprecision(2);

	rate = 1 + rate;

	for (int year = 1; year <= 10 ; year++) {
	
		amount = principal * pow(rate, year );

		cout << setw(4) << year << setw(21) << amount << endl;

	}

	return 0;
}

