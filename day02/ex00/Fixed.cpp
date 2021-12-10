#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	value = 0;
};

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &fix){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->value = fix.getRawBits();
	return (*this);
}