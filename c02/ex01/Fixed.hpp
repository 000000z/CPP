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
        std::cout << "Default Constructor called" << std::endl;
    }

    Fixed(const int number)
    {
        std::cout << "Int constructor called" << std::endl;
        this->number = number << bits;
    }

    Fixed(const float number)
    {
        std::cout << "Float constructor called" << std::endl;
        this->number = roundf(number * (1 << bits));
    }

    Fixed(const Fixed &num)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = num;
    }

    Fixed& operator=(const Fixed &nb)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        if(this != &nb)
            number = nb.getRawBits();
        return(*this);
    }

    ~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);



#endif
