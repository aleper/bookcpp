/*
 * ex2-16.cpp
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
	int x , y ;
	cout << "Entre dois Numeros :" << endl;
	cin >> x >> y ;
	
	cout << "Soma      :\t" << x + y << endl;
	cout << "Diferença :\t" << x - y << endl;
	cout << "Produto   :\t" << x * y << endl;
	if ( x >= y )
		cout << "Quociente :\t" << x / y << endl;
	cout << "Modulo    :\t" << x % y << endl;
	
	return 0;
}

