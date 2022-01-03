/*
 * ex2-25.cpp
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
	int a , b , m;
	
	// Entra Dados.
	cout << "Entre 2 Inteiros :" << endl;
	cin >> a >> b;
	
	// Determina módulo dos números.
	m = b % a;
	if ( a > b )
		m = a % b;
	
	// Informa se são ou não multiplos
	if ( m != 0 )
		cout << "Não ";
	cout << "São Múltiplos." << endl;
	
	return 0;
}

