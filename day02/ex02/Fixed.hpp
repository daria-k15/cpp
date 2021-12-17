#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed{
    private:
        int value;
        static const int frac_bits = 8;
    public:
        Fixed();
        Fixed(int value);
        Fixed(float value);
        ~Fixed();
        Fixed & operator = (const Fixed &fix);
        Fixed(const Fixed &fix);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;

        bool operator>(const Fixed &fix) const;
        bool operator<(const Fixed &fix) const;
        bool operator>=(const Fixed &fix) const;
        bool operator<=(const Fixed &fix) const; 
        bool operator == (const Fixed &fix) const;
        bool operator != (const Fixed &fix) const;

        Fixed operator + (const Fixed &fix) const;
        Fixed operator - (const Fixed &fix) const;
        Fixed operator * (const Fixed &fix) const;
        Fixed operator / (const Fixed &fix) const;

        Fixed &operator ++ (void);
        Fixed operator ++ (int);
        Fixed &operator --(void);
        Fixed operator --(int);

        static const Fixed &min(const Fixed&val1, const Fixed &val2);
        static const Fixed &max(const Fixed &val1, const Fixed &val2);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);

#endif