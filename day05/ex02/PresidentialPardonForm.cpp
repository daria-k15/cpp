#include "PresidentialPardonForm.hpp"

const std::string PresidentialPardonForm::presName_("PresidentialPardon");

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : 
	Form(presName_, target, requiredSignGrade_, requiredExecGrade_){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other){
	*this = other;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	(void)other;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::action() const{
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
