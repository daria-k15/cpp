#include "RobotomyRequestForm.hpp"

const std::string RobotomyRequestForm::robName_ = "RobotomyRequest";

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form(robName_, target, requiredSignGrade_, requiredExecGrade_){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other){
	*this = other;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	(void)other;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::action() const{
	srand(time(NULL));
	if (rand() % 2){
		std::cout << "Bzzzzzzz! " << getTarget() << " has been robotomized successfully!" << std::endl; 
	} else{
		std::cout << getTarget() << " failed" << std::endl;
	}
}

Form *RobotomyRequestForm::create(const std::string &target){
	return (new RobotomyRequestForm(target));
}

