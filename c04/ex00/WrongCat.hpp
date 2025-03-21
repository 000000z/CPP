#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat() : WrongAnimal()
	{
		std::cout << "WrongCat Constructor default has been called" << std::endl;
		this->type = "WrongCat";
	}
	~WrongCat()
	{
		std::cout << "WrongCat Destructor has been called" << std::endl;

	}
	WrongCat& operator=(const WrongCat& other)
    {
        std::cout << "WrongCat Assignment Operator has been called" << std::endl;
        if (this != &other)
        {
            this->type = other.type;
        }
        return *this;
    }
	void makeSound(void) const
	{
		std::cout << " NOT MIAOU" << std::endl;
	}
	std::string getType() const
	{
		return(this->type);
	}
};

#endif