#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Karen{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string);
};

#endif