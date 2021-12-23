#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name_(""), grade_(lowest){};

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat &other){
	*this = other;
}

Bureaucrat::Bureaucrat(std::string name) : name_(name), grade_(lowest){};

Bureaucrat::Bureaucrat(int grade) : name_(""), grade_(grade){
	if (isGradeTooHigh(grade)){
		throw (GradeTooHighException("Grade is TOO HIGH!"));
	} else if (isGradeTooLow(grade)){
		throw(GradeTooLowException("Grade is TOO LOW!"));
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade){
	if (isGradeTooHigh(grade)){
		throw (GradeTooHighException("Grade is TOO HIGH!"));
	} else if (isGradeTooLow(grade)){
		throw(GradeTooLowException("Grade is TOO LOW!"));
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other){
		this->grade_ = other.getGrade();
	}
	return(*this);
}

const std::string Bureaucrat::getName() const{
	return (name_);
}

int Bureaucrat::getGrade() const{
	return(grade_);
}

bool Bureaucrat::isGradeTooHigh(int grade){
	return (grade < highest);
}

bool Bureaucrat::isGradeTooLow(int grade){
	return(grade > lowest);
}

void Bureaucrat::incrementGrade(){
	if (grade_ == highest){
		throw (GradeTooLowException("Grade is TOO LOW!"));
	}
	grade_ -= 1;
}

void Bureaucrat::decrementGrade(){
	if (grade_ == lowest)
		throw (GradeTooHighException("Grade is TOO HIGH!"));
	grade_ += 1;
}

void Bureaucrat::signForm(Form &form) const{
	try{
		form.beSigned(*this);
		std::cout << name_ << " signs " << form.getName() << std::endl;
	} catch (std::exception &e){
		std::cerr << name_ << " cannot sign " << form.getName() << " because "<< e.what() << std :: endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *msg) : msg_(msg){}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (msg_);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *msg) : msg_(msg){}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (msg_);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other){
	os << other.getName() << " , bureaucrat grade " << other.getGrade() << ".";
	return (os);
}

