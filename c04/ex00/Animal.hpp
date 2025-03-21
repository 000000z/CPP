#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal()
	{
		std::cout << "Animal Constructor default has been called" << std::endl;
		type = "unknown";
	}
	Animal(const Animal& other)
    {
        std::cout << "Animal Copy Constructor has been called" << std::endl;
        *this = other;
    }
	Animal& operator=(const Animal& other)
    {
        std::cout << "Animal Assignment Operator has been called" << std::endl;
        if (this != &other)
        {
            this->type = other.type;
        }
        return *this;
    }
	virtual ~Animal()
	{
		std::cout << "Animal Destructor has been called" << std::endl;
	}
	virtual void makeSound(void) const
	{
		std::cout << "MAKE SOUND" << std::endl;
	}

	virtual std::string getType() const;
};

class Dog : public Animal
{
public:

	Dog() : Animal()
	{
		std::cout << "Dog Constructor default has been called" << std::endl;
		this->type = "Dog";
	}

	~Dog()
	{
		std::cout << "Dog Destructor has been called" << std::endl;
	}
	void makeSound(void) const
	{
		std::cout << this->type << ": *bark*" << std::endl;
	}
	Dog& operator=(const Dog& other)
    {
        std::cout << "Dog Assignment Operator has been called" << std::endl;
        if (this != &other)
        {
            this->type = other.type;
        }
        return *this;
    }
	std::string getType() const;
};

class Cat : public Animal
{
public:
	Cat() : Animal()
	{
		std::cout << "Cat Constructor default has been called" << std::endl;
		this->type = "Cat";
	}
	~Cat()
	{
		std::cout << "Cat Destructor has been called" << std::endl;

	}
	Cat& operator=(const Cat& other)
    {
        std::cout << "Cat Assignment Operator has been called" << std::endl;
        if (this != &other)
        {
            this->type = other.type;
        }
        return *this;
    }
	void makeSound(void) const
	{
		std::cout << this->type << ": *meow*" << std::endl;
	}
	std::string getType() const;
};





#endif