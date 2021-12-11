#ifndef POINT_HPP
# define PONT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
    private:
        Fixed x;
        Fixed y;
    public:
        Point(){};
        Point(const Fixed &x_val, const Fixed &y_val);
        Point(const Fixed &x_val);
};
std::ostream &operator<<(std::ostream &os, const Point &point);
#endif