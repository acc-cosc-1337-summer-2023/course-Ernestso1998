//write include statements
#include <iostream>

#include "decisions.h"
	


int main() 
{
	int numericalGrade;

	std::cout<<" Please enter your numerical grade:";
	std::cin >> numericalGrade;
		

	get_letter_grade_using_switch(numericalGrade);
	
	return 0;
}