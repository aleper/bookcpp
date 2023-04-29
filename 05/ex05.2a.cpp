/*
* File: ex05.2a.cpp
* Brief: Soma numeros impares até 99
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/
#include <iostream> 

int main(){

	int count;	
	int sum = 1;
	
	for (count = 3; count < 100; count += 2) {
		sum = sum + count ;
	}
	
	std::cout  << sum  << std::endl;
	
	return 0;
}
