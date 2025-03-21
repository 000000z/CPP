#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string _name, const int _sign_grade, const int _exc_grade): name(_name), sign_grade(_sign_grade), exc_grade(_exc_grade)
{
	std::cout << "AForm constructor has been called" << std::endl;
	if (sign_grade < 1 || exc_grade < 1)
	{
		throw AFormGradeTooHighException(); 
	}
	else if (sign_grade > 150 || exc_grade > 150) {
		throw AFormGradeTooLowException();  
	}
}

AForm::AForm(): name("unknown"), sign_grade(1), exc_grade(1)
{
	std::cout << "AForm Default constructor has been called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm)
{
	out <<	AForm.getName() << ", AForm  grade " << AForm.getGrade() << ", is it signed ? :" << std::boolalpha << AForm.getSign() << std::endl;
	return out;
}
int AForm::getGrade() const
{
    return(sign_grade);
}

int AForm::getExcGrade() const
{
	return(exc_grade);
}

bool AForm::getSign() const
{
	return(this->Sign);
}

std::string AForm::getName() const
{
	return(this->name);
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->sign_grade)
    {
        throw GradeTooLowException();
    }
	this->Sign = true;
}

