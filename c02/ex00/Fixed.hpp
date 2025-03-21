#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int number;
    static const int bits = 8;
public:
    Fixed()
    {
        number = 0;
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed(const Fixed& src)
    {
        std::cout << "Copy constructor called" << std::endl;
        number = src.getRawBits();
    }

    Fixed& operator=(const Fixed &numb)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        if(this != &numb)
            number = numb.getRawBits();
        return(*this);
    }

    ~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }

    int getRawBits( void ) const;

    void setRawBits( int const raw );
};


#endif