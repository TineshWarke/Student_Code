#include <iostream>
#include "student.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	student s1(1,"Tinesh", 90, 80, 75);
	s1.display();
	cout<< "\nTotal marks : "<< s1.totalMarks()<< endl;
	cout<< "Percentage : "<< s1.percentage();
	return 0;
}
