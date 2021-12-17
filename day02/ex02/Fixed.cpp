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

bool Fixed::operator>(const Fixed &fix) const{
	return (value > fix.getRawBits());
}

bool Fixed::operator<(const Fixed &fix) const{
	return(value < fix.getRawBits());
}

bool Fixed::operator>=(const Fixed &fix) const{
	return (value >= fix.getRawBits());
}

bool Fixed::operator<=(const Fixed &fix) const{
	return(value <= fix.getRawBits());
}

bool Fixed::operator==(const Fixed &fix) const{
	return(value == fix.getRawBits());
}

bool Fixed::operator!=(const Fixed &fix) const{
	return (value != fix.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fix) const{
	Fixed tmp;
	tmp.setRawBits(value + fix.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fix) const{
	Fixed tmp;
	tmp.setRawBits(value - fix.getRawBits());
	return(tmp);
}

Fixed Fixed::operator*(const Fixed &fix) const{
	Fixed tmp;
	long tmp_val = value;
	tmp_val *= fix.getRawBits();
	tmp_val /= (1 << frac_bits);
	tmp.setRawBits(static_cast<int>(tmp_val));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &fix) const{
	Fixed tmp;
	long tmp_val = value;
	if (fix.getRawBits() == 0){
		std::cout << "Division by zero!" << std::endl;
		tmp.setRawBits(0);
	} else{
		tmp_val <<= frac_bits;
		tmp_val /= fix.getRawBits();
		tmp.setRawBits(tmp_val);
	}
	return (tmp);
}

Fixed &Fixed::operator++(void){
	this->setRawBits(++(this->value));
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++(*this);
	return(tmp);
}

Fixed &Fixed::operator--(void){
	this->setRawBits(--(this->value));
	return(*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--(*this);
	return(tmp);
}

const Fixed &Fixed::min(const Fixed &val1, const Fixed &val2){
	return(val1 <=val2 ? val1 : val2);
}

const Fixed &Fixed::max(const Fixed &val1, const Fixed &val2){
	return(val1 >=val2 ? val1 : val2);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}