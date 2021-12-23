#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class Intern{
	private:
		static const int forms = 3;
		static const std::string fNames[3];
	public:
		Intern();
		Intern(const Intern &);
		Intern & operator=(const Intern &);
		~Intern();

		Form *makeForm(const std::string &fName, const std::string &target);

		class notKnownForm : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

#endif
