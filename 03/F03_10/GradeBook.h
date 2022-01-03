/*
 * gradebook.h
 * 
 * Copyright 2021 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 */
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

class GradeBook
{
	public:
		GradeBook(string name)
		{
			setCourseName(name);
		}
			
		void setCourseName(string name)
		{
			courseName = name;
		}	
		
		string getCourseName()
		{
			return courseName;
		}
		
		void displayMessage()
		{
			cout << "Welcome to the GradeBook for\n" << getCourseName() << "!" << endl;
		}
	private:
		string courseName;
};

