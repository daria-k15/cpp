#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
	private:
		const std::string name_;
		int grade_;
		static const int highest = 1;
		static const int lowest = 150;
	public:
		Bureaucrat();
		~Bureaucrat();
		explicit Bureaucrat(std::string name); 
		explicit Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat & operator=(const Bureaucrat &other);
		Bureaucrat(std::string name, int grade);

		const std::string getName() const;
		int getGrade() const;

		static bool isGradeTooHigh(int grade);
		static bool isGradeTooLow(int low);

		void incrementGrade();
		void decrementGrade();

		void signForm(Form &form) const;
		void executeForm(const Form &form);

		class GradeTooHighException : public std::exception{
			private:
				const char *msg_;
			public:
				GradeTooHighException(const char *msg);
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			private:
				const char *msg_;
			public:
				GradeTooLowException(const char *msg);
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os , const Bureaucrat &a);

#endif