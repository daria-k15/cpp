#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        ~Point();
        Point(const float x_val, const float y_val);
        Point(const Point &other);
        Point & operator=(const Point &point);
        Fixed getX(void) const;
        Fixed getY(void) const;
        void setX(float x_val) const;
        void setY(float y_val) const;
};
std::ostream &operator<<(std::ostream &os, const Point &point);
#endif