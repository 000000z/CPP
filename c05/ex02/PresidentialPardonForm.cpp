#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), name("unknown")
{
	std::cout << "PresidentialPardonForm Default constructor has been called" << std::endl;
	exc_grade = 5;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):	AForm("PresidentialPardonForm", 25, 5), name(target)
{
	std::cout << "PresidentialPardonForm Constructor has been called" << std::endl;
	exc_grade = 5;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm copy constructor has been called" << std::endl;
	*this = rhs;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if(this != &rhs)
	{
		exc_grade = rhs.exc_grade;
		name = rhs.name;
	}
}

int PresidentialPardonForm::getExcGrade()
{
	return(this->exc_grade);
}

std::string PresidentialPardonForm::getName()
{
	return(this->name);
}