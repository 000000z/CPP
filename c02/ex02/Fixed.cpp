#include "Fixed.hpp"

float Fixed::toFloat( void ) const
{
    float res = (float) number / ( 1 << bits);
    return(res);
}

int Fixed::toInt( void ) const
{
    return(number >> bits);
}

int Fixed::getRawBits( void ) const
{
    return(number);
}

void Fixed::setRawBits( int const raw )
{
    number = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed operator+(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.toFloat() + nb2.toFloat());

}

Fixed operator-(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.toFloat() - nb2.toFloat());

}

Fixed operator*(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.toFloat() * nb2.toFloat());
}

Fixed operator/(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.toFloat() / nb2.toFloat());
}

bool   operator==(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() == nb2.getRawBits());
}

bool   operator<(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() < nb2.getRawBits());
}

bool   operator>(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() > nb2.getRawBits());
}

bool   operator>=(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() >= nb2.getRawBits());
}

bool   operator<=(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() <= nb2.getRawBits());
}

bool   operator!=(const Fixed& nb1, const Fixed& nb2)
{
    return(nb1.getRawBits() != nb2.getRawBits());
}

Fixed& operator++(Fixed& fixed)
{
    fixed.number += 1; 
    return fixed;
}

Fixed& operator--(Fixed& fixed)
{
    fixed.number -= 1; 
    return fixed;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.number < b.number)
        return(a);
    else
        return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.number > b.number)
        return(a);
    else
        return(b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a.number < b.number)
        return(a);
    else
        return(b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a.number > b.number)
        return(a);
    else
        return(b);
}