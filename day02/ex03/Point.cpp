#include "Point.hpp"

Point::Point() : x(0), y(0){
    std::cout << "Point default constructor called" << std::endl;
};

Point::~Point(){
    std::cout << "Point desructor called" << std::endl;
}

Point::Point(const Point &other){
    std::cout << "Point copy constructor called" << std::endl;
    *this = other;
}

Point &Point::operator=(const Point &point){
    std::cout << "Point assignation operator called" << std::endl;
    if (this != &point){
        Fixed x = getX();
        Fixed y = getY();
    }
    return(*this);
}

 Point::Point(const float x_val, const float y_val){
     x.setRawBits(x_val);
     y.setRawBits(y_val);
    // Fixed x = static_cast<int>(roundf(x_val * (1 << 8)));
    // Fixed y = static_cast<int>(roundf(y_val * (1 << 8)));
 }

Fixed Point::getX(void) const{
    return (x.getRawBits());
}

Fixed Point::getY(void) const{
    return(y.getRawBits());
}
std::ostream &operator<<(std::ostream &os, const Point &point)
{
	os << "(" << point.getX() << " , " << point.getY() << ")";
	return (os);
}