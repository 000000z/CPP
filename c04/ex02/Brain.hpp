#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain()
	{
		std::cout << "Default Brain constructor called" << std::endl;
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = "";
		}
	}
	Brain(const Brain& other) 
	{
		std::cout << "Copy Brain constructor called" << std::endl;
		for (int i = 0; i < 100; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	~Brain()
	{
		std::cout << "Default Brain Destructor called" << std::endl;
	}
	Brain& operator=(const Brain& other)
    {
        std::cout << "Brain Assignment Operator has been called" << std::endl;
        if (this != &other)
        {
			for(int i = 0; i < 100; i++)
			{
				ideas[i] = other.ideas[i];
				
			}
        }
        return *this;
    }
	std::string getIdeas(int i)
	{
		return(ideas[i]);
	}
	void setIdeas(std::string idea, int i)
	{
		ideas[i] = idea;
	}
};

#endif