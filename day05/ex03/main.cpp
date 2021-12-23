#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void){

	Bureaucrat b_top("top", 1);
	{
		Intern someRandomIntern;
		Form *rrf;
		try
		{
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			b_top.signForm(*rrf);
			b_top.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	Bureaucrat b_pres("top", 1);
	{
		Intern someRandomIntern;
		Form *rrf;
		try
		{
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			b_top.signForm(*rrf);
			b_top.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	Bureaucrat b_shr("top", 1);
	{
		Intern someRandomIntern;
		Form *rrf;
		try
		{
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			b_top.signForm(*rrf);
			b_top.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}