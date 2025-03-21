#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), name("unknown")
{
	std::cout << "Default constructor has been called" << std::endl;
	exc_grade = 45;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), name(target)
{
	std::cout << "Constructor has been called" << std::endl;
	exc_grade = 45;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	std::cout << "RobotomyRequestForm copy constructor has been called" << std::endl;
	*this = rhs;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if(this != &rhs)
	{
		exc_grade = rhs.exc_grade;
		name = rhs.name;
	}
}

int RobotomyRequestForm::getExcGrade()
{
	return(this->exc_grade);
}

std::string RobotomyRequestForm::getName()
{
	return(this->name);
}