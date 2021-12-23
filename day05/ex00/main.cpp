#include "Bureaucrat.hpp"

void printConst(int grade){
	std::string name = "bob";
	try{
		Bureaucrat a(name, grade);
		std::cout << a << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}

void printIncr(int grade){
	std::string name = "john";
	try{
		Bureaucrat a(name, grade);
		std::cout << "Before increment: " <<  a << std::endl;
		a.incrementGrade();
		std::cout << "After incrememt: " << a << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}

void printDec(int grade){
	std::string name = "a";
	try{
		Bureaucrat a(name, grade);
		std::cout << "Before decrement: " << a << std::endl;
		a.decrementGrade();
		std::cout << "After decrement: " << a << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}

int main(void){

	std::cout << "<<<<<<<<Constructor test>>>>>>>>>>>>>" << std::endl;
	printConst(6);
	printConst(-5);
	printConst(250);

	std::cout << "<<<<<<<<Increment test>>>>>>>>>>>>>" << std::endl;
	printIncr(6);
	printIncr(0);
	printIncr(250);

	std::cout << "<<<<<<<<Decrement test>>>>>>>>>>>>>" << std::endl;
	printDec(56);
	printDec(-21);
	printDec(420);
	
}