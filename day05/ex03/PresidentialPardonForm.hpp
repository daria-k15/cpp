#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>

class PresidentialPardonForm : public Form{
	private:
		PresidentialPardonForm();
		static const std::string presName_;
		static const int requiredSignGrade_ = 25;
		static const int requiredExecGrade_ = 5;
		virtual void action() const;
	public:
		explicit PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		static Form *create(const std::string &target);
};

#endif