/*
 * fig03_03.cpp
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

#include <string>
using std::string;
using std::getline;

// Define Classe GradeBook
class GradeBook
{
public:
	void displayMessage(string coursename)
	{
		cout << "Bem Vindo ao Curso de\n" << coursename << endl;
	}
};

int main()
{
	string nameOfCourse;	// Define variavel tipo string  
	GradeBook myGradeBook;	// Instancia Objeto myGradeBook
	// Entrada do nome do curso com espaços
	cout << "Entre o Nome do Curso :" << endl;
	getline(cin, nameOfCourse);
	cout << endl;
	// Chama função-membro displayMessage
	myGradeBook.displayMessage(nameOfCourse);
	
	return 0;
}

