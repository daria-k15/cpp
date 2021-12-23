#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
	name_(""),
	target_(""),
	signed_(false),
	gradeToSign_(lowest),
	gradeToExecute_(highest){}

Form::~Form(){}

Form::Form(std::string name, std::string target, int gradeToSign, int gradeToExecute) : 
	name_(name),
	target_(target),
	signed_(false),
	gradeToSign_(gradeToSign),
	gradeToExecute_(gradeToExecute){
		if (Bureaucrat::isGradeTooHigh(gradeToSign) || Bureaucrat::isGradeTooHigh(gradeToExecute)){
			throw (GradeTooHighException("Grade is TOO HIGH!"));
		} else if(Bureaucrat::isGradeTooLow(gradeToSign) || Bureaucrat::isGradeTooLow(gradeToExecute)){
			throw (GradeTooLowException("Grade is TOO LOW!"));
		}
	}

Form::Form(const Form &other) :
	name_(other.getName()),
	signed_(other.getSigned()),
	gradeToSign_(other.getGradeToSign()),
	gradeToExecute_(other.getGradeToExecute()){}

Form & Form::operator=(const Form &other){
	if (this != &other){
		signed_ = other.getSigned();
	}
	return(*this);
}

const std::string Form::getName() const{
	return(name_);
}

const std::string Form::getTarget() const{
	return(target_);
}

int Form::getGradeToSign() const{
	return(gradeToSign_);
}

int Form::getGradeToExecute() const{
	return (gradeToExecute_);
}

bool Form::getSigned() const{
	return(signed_);
}

void Form::beSigned(const Bureaucrat &other){
	if (signed_)
		return ;
	else if (gradeToSign_ < other.getGrade())
		throw (GradeTooLowException("exception in beSigned. Grade is too LOW!!"));
	signed_ = true;
}

void Form::execute(const Bureaucrat &execute) const{
	if (!signed_)
	{
		throw (notSignedException());
	}
	if (gradeToExecute_ < execute.getGrade())
	{
		throw (GradeTooLowException("exception in execute. Grade is too LOW!!"));
	}
	action();
}

Form::GradeTooHighException::GradeTooHighException(const char *msg) : msg_(msg){}

const char *Form::GradeTooHighException::what() const throw(){
	return(msg_);
}

Form::GradeTooLowException::GradeTooLowException(const char *msg) : msg_(msg){}

const char *Form::GradeTooLowException::what() const throw(){
	return(msg_);
}
const char *Form::notSignedException::what() const throw()
{
	return ("FORM is not signed");
}

std::ostream &operator<<(std::ostream &os, const Form &other){
	os << "Name: " <<other.getName() << "\n" 
	<<"Form is " << (other.getSigned() ? "signed" : "not signed") << "\n" 
	<< "Grade to  sign: " << other.getGradeToSign()<< "\n"
	<< "Grade to execute: " << other.getGradeToExecute() << "\n";
	return (os);
}
