#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal()
		{
			std::cout << "WrongAnimal Constructor default has been called" << std::endl;
			type = "unknown";
		}
		WrongAnimal(const WrongAnimal& other)
		{
			std::cout << "WrongAnimal Copy Constructor has been called" << std::endl;
			*this = other;
		}
		WrongAnimal& operator=(const WrongAnimal& other)
		{
			std::cout << "WrongAnimal Assignment Operator has been called" << std::endl;
			if (this != &other)
			{
				this->type = other.type;
			}
			return *this;
		}
		virtual ~WrongAnimal()
		{
			std::cout << "WrongAnimal Destructor has been called" << std::endl;
		}
		virtual void makeSound(void) const
		{
			std::cout << "WRONG NOISE" << std::endl;
		}
	
		virtual std::string getType() const
		{
			return(type);
		}
	};

#endif