#include "Bureaucrat.hpp"

int main(void){
	// Bureaucrat *a = new Bureaucrat();
	// std::cout << a << std::endl;

	try{
		Bureaucrat bob("bob", -1);
		std::cout << bob << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}