/*
* File: ex04_35a.cpp
* Brief: Exercicio que calcula fatorial dew um numero ate 12 .
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

//int in;
int fat;
int x;

int main(){
	cout << "Entre um numero : ";
	cin >> x;
//	cin >> in;

	fat = x;  //= in ;
	while (x > 1) {
		fat = fat  * --x;
	}
	 cout << fat << endl;

	return 0;
}
