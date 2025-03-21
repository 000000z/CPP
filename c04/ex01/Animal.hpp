#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <ostream>
#include <iostream>
#include <string>

#include "Brain.hpp"

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
private:
	Brain *brain;
public:

	Dog() : Animal()
	{
		std::cout << "Dog Constructor default has been called" << std::endl;
		this->type = "Dog";
		this->brain = new Brain();
	}
	Dog(const Dog& other)
	{
		brain = new Brain(*other.brain); 
	    std::cout << "Dog copy constructor called.\n";
	}
	~Dog()
	{
		delete brain;
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
	void setDogIdea(std::string idea, int i);
	std::string getDogIdea(int i);
};

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat() : Animal()
	{
		std::cout << "Cat Constructor default has been called" << std::endl;
		this->type = "Cat";
		this->brain = new Brain();
	}
	Cat(const Cat& other)
	{
		brain = new Brain(*other.brain); 
	    std::cout << "Cat copy constructor called.\n";
	}
	~Cat()
	{
		delete brain;
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
	void setCatIdea(std::string idea, int i);
	std::string getCatIdea(int i);
};



#endif