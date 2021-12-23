#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>

class  ShrubberyCreationForm : public Form{
	private:
		ShrubberyCreationForm();
		
		static const std::string shrName_;
		static const int requiredSignGrade_ = 145;
		static const int requiredExecGrade_ = 137;
		virtual void action() const;
	public:
		explicit ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();
		static Form *create(const std::string &target);
};

#endif