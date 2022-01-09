/*
* File: GradeBook.h
* Brief: Interface da Classe GradeBook 
*
* Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
*/

#include<string> 
using std::string;

class GradeBook
{
public:
	GradeBook(string, string);
	void setCourseName(string);
	void setInstructor(string);
	string getCourseName();
	string getInstructor();
	void displayMessage();
private:
	string courseName;
	string instructor;
};


