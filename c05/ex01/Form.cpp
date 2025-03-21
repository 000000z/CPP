#include "Form.hpp"
#include "bureaucrat.hpp"

Form::Form(const std::string _name, const int _sign_grade, const int _exc_grade): name(_name), sign_grade(_sign_grade), exc_grade(_exc_grade)
{
	std::cout << "Form constructor has been called" << std::endl;
	if (sign_grade < 1 || exc_grade < 1)
	{
		throw FormGradeTooHighException(); 
	}
	else if (sign_grade > 150 || exc_grade > 150) {
		throw FormGradeTooLowException();  
	}
}

Form::Form(): name("unknown"), sign_grade(1), exc_grade(1)
{
	std::cout << "Form Default constructor has been called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Form& Form)
{
	out <<	Form.getName() << ", Form  grade " << Form.getGrade() << ", is it signed ? :" << std::boolalpha << Form.getSign() << std::endl;
	return out;
}
int Form::getGrade() const
{
    return(sign_grade);
}

int Form::getExcGrade() const
{
	return(exc_grade);
}

bool Form::getSign() const
{
	return(this->Sign);
}

std::string Form::getName() const
{
	return(this->name);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->sign_grade)
    {
        throw GradeTooLowException();
    }
	this->Sign = true;
}

