#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string name_;
		const std::string target_;
		bool signed_;
		static const int lowest = 150;
		static const int highest = 1;
		const int gradeToSign_;
		const int gradeToExecute_;

		virtual void action() const = 0;
	public:
		void execute(const Bureaucrat &executor) const;
		Form(const Form &other);
		Form & operator=(const Form &other);
		Form();
		virtual ~Form();
		Form(std::string name, std::string target, int gradeToSign, int gradeToExecute);

		const std::string getName() const;
		const std::string getTarget() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSigned() const;

		void beSigned(const Bureaucrat &other);

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

		class notSignedException : public std::exception{
			public:
				virtual const char *what() const throw();
		};

};
std::ostream &operator<<(std::ostream &os , const Form &a);

#endif
