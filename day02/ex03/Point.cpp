#include <Point.hpp>

Point::Point() : x(0), y(0){};



std::ostream &operator<<(std::ostream &out, const Point &point){
    out << Fixed.x << Fixed.y;
}