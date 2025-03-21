#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int number;
    const static int bits = 8;
public:
    Fixed()
    {
        number = 0;
    }

    Fixed(const int number)
    {
        this->number = number << bits;
    }

    Fixed(const float number)
    {
        this->number = roundf(number * (1 << bits));
    }

    Fixed(const Fixed &num)
    {
        *this = num;
    }

    Fixed& operator=(const Fixed &nb)
    {
        if(this != &nb)
            number = nb.getRawBits();
        return(*this);
    }

    ~Fixed()
    {
    }

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed& min(Fixed &a, Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& min(Fixed const &a, Fixed const &b);
    static const Fixed& max(Fixed const &a, Fixed const &b);

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
Fixed operator*(const Fixed& nb1, const Fixed& nb2);
Fixed operator-(const Fixed& nb1, const Fixed& nb2);
Fixed operator+(const Fixed& nb1, const Fixed& nb2);
Fixed operator/(const Fixed& nb1, const Fixed& nb2);
bool   operator==(const Fixed& nb1, const Fixed& nb2);
bool   operator>(const Fixed& nb1, const Fixed& nb2);
bool   operator<(const Fixed& nb1, const Fixed& nb2);
bool   operator>=(const Fixed& nb1, const Fixed& nb2);
bool   operator<=(const Fixed& nb1, const Fixed& nb2);
bool   operator!=(const Fixed& nb1, const Fixed& nb2);

#endif
