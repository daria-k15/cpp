#ifndef CREATURE_H
#define CREATURE_H
 
#include <iostream>
#include <string>
#include "point.hpp"
 
class Creature
{
private:
    std::string m_name;
    Point const m_location;
 
public:
    Creature(const std::string &name, const Point &location)
        : m_name(name), m_location(location)
    {
    }
 
    friend std::ostream& operator<<(std::ostream& out, const Creature &creature)
    {
        out << creature.m_name << " is at " << creature.m_location;
        return out;
    }
 
    void const moveTo(int x, int y)
    {
        m_location.setPoint(x, y);
    }
};
#endif