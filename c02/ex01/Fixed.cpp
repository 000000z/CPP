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
    std::cout << "setRawBits member function called" << std::endl;
    number = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}