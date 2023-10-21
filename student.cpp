#include "student.h"

student::student(int id, string name, int mark1, int mark2, int mark3)
{
	this->id = id;
	this->name = name;
	this->mark1 = mark1;
	this->mark2 = mark2;
	this->mark3 = mark3; 
}

void student::display(){
	cout<< "|id : "<<id<<" |Name: "<<name<< " |Mark1 : "<< mark1 <<" |Mark2: "<< mark2 <<" |Mark3: "<< mark3<< endl;
}

int student::totalMarks(){
	return mark1 + mark2 + mark3;
}

double student::percentage(){
 	return (mark1 + mark2 + mark3) / 3; 
}

student::~student()
{
}
