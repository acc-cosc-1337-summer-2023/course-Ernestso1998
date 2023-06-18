//write include statements
#include <iostream>
#include <string>

#include "repetition.h"
//write using statements

int main() 
{

char choice;

do{

	std::string gc_str= " ";
	
	std::cout << "please enter dna strand: ";
	std::cin>> gc_str;
	
 	get_gc_content (gc_str);

    std::cout<<"Would you like to continue?(Y/N)"<<std::endl;
    std::cin >> choice;
 
    if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n')
        std::cout << choice << " is not a valid option. Try agian" << std::endl;

    }while (choice !='N' && choice !='n'); 

	return 0;
}
