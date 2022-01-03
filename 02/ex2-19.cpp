/*
 * ex2-19.cpp
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
	int x , y , z , m ;
	
	cout << "Entre 3 Inteiros :" << endl;
	cin >> x >> y >> z ;
	
	cout << "Soma    :" << x + y + z << endl;
	cout << "Média   :" << (x + y + z)/3 << endl;
	cout << "Produto :" << x * y * z << endl;
	
	// Acha o Menor Número dos 3
	m = y ;
	if ( x < y )
		m = x ;
	if ( z < m )
		m = z ;
	cout << "Menor   :" << m << endl;
	
	// Acha o Maior Número dos 3
	m = y ;
	if ( x > y )
		m = x ;
	if ( z > m )
		m = z ;
	cout << "Maior   :" << m << endl;	
	
	return 0;
}

