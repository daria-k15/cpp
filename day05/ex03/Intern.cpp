#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

const std::string Intern::fNames[3]={
	"robotomy request",
	"presidential pardon",
	"shrubbery creation"
};

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern &){}
Intern &Intern::operator=(const Intern &){return(*this);}

Form *Intern::makeForm(const std::string &formName, const std::string &target){
	Form*(*make_form[3])(const std::string &target)={
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create,
		&ShrubberyCreationForm::create
	};
	for (int i = 0; i < forms; i++){
		if (formName == fNames[i]){
			std::cout << "Intern creates " << formName << std::endl;
			return(make_form[i](target));
		}
	} throw  (notKnownForm());
}

const char *Intern::notKnownForm::what() const throw(){
	return("Unknown form! Intern can't create it!");
}
