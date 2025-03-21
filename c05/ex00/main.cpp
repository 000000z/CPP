#include "bureaucrat.hpp"


int main() 
{
	try {
		Bureaucrat Bureau("Lydia", 150);
		
		std::cout << "\n-----Checking << operator-----\n";
		std::cout << Bureau << std::endl;
	
		try {
			Bureau.setGrade(149);
		}
		catch (const std::exception &e) {
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		
		std::cout << "-----Working incrementation and GradeDecrementation-----\n" << std::endl;
		
		Bureau.GradeIncrementation();
		Bureau.GradeDecrementation();
		
		std::cout << "-----Failing incrementation and GradeDecrementation-----\n" << std::endl;
	
		Bureau.setGrade(150);
		Bureau.GradeDecrementation();
	
		Bureau.setGrade(1);
		Bureau.GradeIncrementation();
	
		std::cout << "-----Failing : grade too high and too low-----\n" << std::endl;
	
    	try {
    	    Bureau.setGrade(-5);
    	}
    	catch(std::exception const& error) {
    	    std::cout << error.what() << std::endl;
    	}
		
		try {
    		Bureau.setGrade(151);
    	}
    	catch(std::exception const& error) {
    	    std::cout << error.what() << std::endl;
    	}
		}
	catch (const std::exception &e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
		return 1;
	}

    return 0;
}