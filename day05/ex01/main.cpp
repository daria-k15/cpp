#include "Bureaucrat.hpp"
#include "Form.hpp"

void printConst(int gradeToSign, int gradeToExecute){
	std::string name = "bob";
	try{
		Form a(name, gradeToSign, gradeToExecute);
		std::cout << a << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}

void printSigned(int gradeToSign, int gradeToExecute){
	std::string name = "john";
	try{
		Bureaucrat b(name, 15);
		Form a(name, gradeToSign, gradeToExecute);
		a.beSigned(b);
		std::cout << a << std::endl;
	} catch(std::exception &e){
		std::cerr << e.what() << std :: endl;
	}
}

void printS(std::string fName, int gradeToSign, int gradeToExecute){
	Bureaucrat bob("bob", 10);
	std::cout << bob << std::endl;

	Form form(fName, gradeToSign, gradeToExecute);
	bob.signForm(form);
	std::cout << std::endl;
}

int main(void){

	std::cout << "<<<<<<<<Constructor test>>>>>>>>>>>>>" << std::endl;
	printConst(6, 15);
	printConst(-5, 5);
	printConst(250, 10);

	printSigned(50, 21);
	printSigned(5, 210);
	
	printS("john", 15, 20);
	printS("john", 5, 15);
}