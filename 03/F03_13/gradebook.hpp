/*
 * gradebook.hpp
 * 
 * Copyright 2022 Alexandre Pereira <alexandre.aleper@gmail.com>
 * 
 */
#include <string>
using std::string;

class GradeBook
{
	public:
		GradeBook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
			
	private:
		string courseName;
};

