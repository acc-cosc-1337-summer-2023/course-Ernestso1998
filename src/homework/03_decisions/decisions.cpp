//write include statement for decisions header
#include <iostream>
#include "decisions.h"


//Write code for function(s) code here

int get_letter_grade_using_switch(int numericalGrade){

    int grade = (numericalGrade/10);

    switch(grade){
        case 10:
            std::cout << "A";
            return 'A';
            break;
        case 9:
            std::cout << "A";
            return 'A';
            break;
        case 8:
            std::cout << "B";
            return 'B';
            break;
        case 7:
            std::cout << "C";
            return 'C';
            break; 
        case 6:
            std::cout << "D";
            return 'D';
            break;
        case 5:
            std::cout << "F";
            return 'F';
        default:
            std::cout << "F";
    }
    
    return 0;
}







