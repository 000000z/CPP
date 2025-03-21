#include "Animal.hpp"

std::string Animal::getType() const
{
	return(this->type);
}

std::string Dog::getType() const
{
	return(this->type);
}

std::string Cat::getType() const
{
	return(this->type);
}

void Dog::setDogIdea(std::string idea, int i)
{
	if(brain)
	{
		brain->setIdeas(idea, i);
	}
}

std::string Dog::getDogIdea(int i)
{
	if(brain)
	{
		return(brain->getIdeas(i));
	}
	return("");
}

void Cat::setCatIdea(std::string idea, int i)
{
	if(brain)
	{
		brain->setIdeas(idea, i);
	}
}

std::string Cat::getCatIdea(int i)
{
	if(brain)
	{
		return(brain->getIdeas(i));
	}
	return("");
}