#include "bureaucrat.hpp"

std::string Bureaucrat::getName()
{
	return(this->name);
}

int Bureaucrat::getGrade()
{
	return(this->grade);
}

void Bureaucrat::GradeIncrementation()
{
    try
    {
        if (grade <= 1)
        {
            throw GradeTooHighException();
        }
        grade--;
        std::cout << "Grade successfully incremented to " << grade << std::endl;
    }
    catch (const GradeTooHighException& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Grade increment failed - already at maximum grade" << std::endl;
    }
}

void Bureaucrat::GradeDecrementation()
{
    try
    {
        if (grade >= 150)  
        {
            throw GradeTooLowException();
        }
        grade++;
        std::cout << "Grade successfully decremented to " << grade << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Grade decrement failed - already at minimum grade" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out <<	Bureaucrat.name << ", bureaucrat grade" << Bureaucrat.grade;
	return out;
}

void	Bureaucrat::setGrade(int grade){
	if (grade > 150) {
    	throw GradeTooLowException();
	}
	else if (grade < 1) {
		throw GradeTooHighException();
	}
	else
		this->grade = grade;
}