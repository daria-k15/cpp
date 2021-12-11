#ifndef POINT_HPP
#define POINT_HPP
 
#include <iostream>
 
class Point
{
private:
    int m_x;
    int m_y;
 
public:
    // Конструктор по умолчанию
    Point()
        : m_x(0), m_y(0)
    {
    }
 
    // Специфический конструктор
    Point(int x, int y)
        : m_x(x), m_y(y)
    {
    }
 
    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& out, const Point &point)
    {
        out << "(" << point.m_x << ", " << point.m_y << ")";
        return out;
    }
 
    // Функция доступа
    void const setPoint(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
 
};
 
#endif