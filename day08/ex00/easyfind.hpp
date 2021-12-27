#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <iomanip>

class notExistException : public std::exception{
	public:
		const char *what() const throw(){
			return ("Not found!");
		}
};

template <typename T>
typename T::const_iterator easyfind(const T &container, int val){
	typename T::const_iterator res = std::find(container.begin(), container.end(), val);
	if (res == container.end()){
		throw (notExistException());
	}
	return (res);
}

template <typename T>
void test(const T &v, int val){
	try{
		std::cout << *easyfind(v, val);
		std::cout << " found" << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

#endif