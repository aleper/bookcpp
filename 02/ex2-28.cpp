/*
 * ex2-28.cpp
 * 
 * Copyright 2021 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a , b , c , d , e , n;
	
	cout << "Entre Inteiro com 5 digitos : ";
	cin >> n;
	
	// Duas Idéias para separação de algarismos
	a = n / 10000;
	//b = n / 1000 - ( a * 10 );
	b = ( n % 10000 -  n % 1000 ) / 1000 ;
	//c = n / 100 - ( a * 100 ) - ( b * 10 );
	c = ( n % 1000 -  n % 100 ) / 100;
	//d = n / 10 - ( a * 1000 ) - ( b * 100 ) - ( c * 10 );
	d = ( n % 100 -  n % 10 ) / 10;
	//e = n - ( a * 10000 ) - ( b * 1000 ) - ( c * 100 ) - ( d * 10 );
	e = ( n % 10 -  n % 1 ) / 1;

	// Imprime com 3 espaços
	cout << a << "   " << b << "   " << c << "   " << d << "   " << e << endl;

	//cout << n % 10000 << " " << n % 1000 << " " << n % 100 << " " << n % 10 << endl;
	
	return 0;
}

