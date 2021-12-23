#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public Form{
	private:
		RobotomyRequestForm();
		static const std::string robName_;
		static const int requiredSignGrade_ = 72;
		static const int requiredExecGrade_ = 45;
		virtual void action() const;
	public:
		explicit RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();
};

#endif