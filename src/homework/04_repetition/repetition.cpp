//add include statements
#include <iostream>
#include <string>

//add function(s) code here
float get_gc_content (const std::string& gc_str){

 	float counter = 0;

    float gc = gc_str.length();

    for(int i = 0; i < gc; i++)
    {
        if (gc_str[i] == 'C' || gc_str[i]== 'G'){
            counter++;
        }
    }

	float gc_percent = counter / gc;
	
    std::cout<<"This is percentage of C's and G's: "<< gc_percent * 100 <<"%"<<std::endl;
 

    return gc_percent;
    }
       
int get_reverse_string (){






        return 0;
    }
    
    
    
    
    
int get_dna_complement  (){







    return 0;
    }