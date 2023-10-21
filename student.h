#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class student
{
	private:
		int id;
		string name;
		int mark1, mark2, mark3;
	public:
		student(int id, string name, int mark1, int mark2, int mark3);
		
		void display();
		int totalMarks();
		double percentage();
		~student();
	protected:
};

#endif
