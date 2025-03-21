#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), name("unknown")
{
	std::cout << "Default constructor has been called" << std::endl;
	exc_grade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 25, 5), name(target)
{
	std::cout << "Constructor has been called" << std::endl;
	exc_grade = 137;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm copy constructor has been called" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if(this != &rhs)
	{
		exc_grade = rhs.exc_grade;
		name = rhs.name;
	}
}

int ShrubberyCreationForm::getExcGrade()
{
	return(this->exc_grade);
}

std::string ShrubberyCreationForm::getName()
{
	return(this->name);
}