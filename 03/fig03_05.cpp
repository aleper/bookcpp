/*
 * fig03_05.cpp
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
using std::getline ;

class GradeBook
{
public:
	void setCoursename(string name)
	{
		courseName = name;
	}
	
	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "Bemvindo ao GradeBook para o curso\n" << getCourseName() << " !" << endl;
	}
private:
	string courseName;
};


int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout << "Nome inicial :\n" << myGradeBook.getCourseName() << endl;	
	cout << "Entre o Nome do Curso :" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCoursename(nameOfCourse);
	
	cout << endl;
	myGradeBook.displayMessage();	
	
	return 0;
}

