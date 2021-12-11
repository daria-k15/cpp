#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constractor called" << std::endl;
	value = 0;
}

Fixed::Fixed(int value){
    std::cout << "Int constractor called" << std::endl;
    this->value = value << frac_bits;
}

Fixed::Fixed(float value){
    std::cout << "Float constractor called" << std::endl;
    this->value = static_cast<int>(roundf(value * (1 << frac_bits)));
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fix){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->value = fix.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

int Fixed::getRawBits(void)const{
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}


float Fixed::toFloat(void) const{
	return(static_cast<float>(this->value) / (1 << frac_bits));
}

int Fixed::toInt(void) const{
	return(static_cast<int>(this->value >> frac_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}