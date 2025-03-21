#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class AForm;
#include <iostream>
class GradeTooHighException : public std::exception 
{
public:
	const char* what() const throw() {
		return "Grade is too high";
	}
};

class GradeTooLowException : public std::exception
{
public:
	const char* what() const throw() {
		return "Grade is too low";
	}
};

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat()
	{
		std::cout << "Bureaucrat Default constructor called" << std::endl;
	}
	~Bureaucrat()
	{
		std::cout << getName() <<  " Destructor called" << std::endl;
	}
	Bureaucrat(const Bureaucrat &rhs)
	{
		std::cout << "Bureaucrat copy constructor has been called" << std::endl;
		*this = rhs;
	}
	Bureaucrat(const std::string& name, int grade) : name(name)
	{
		std::cout << "Bureaucrat constructor has been called" << std::endl;
        if (grade < 1)
		{
            throw GradeTooHighException(); 
        }
        else if (grade > 150) {
            throw GradeTooLowException();  
        }
        this->grade = grade;
    }
	void GradeIncrementation();
	void GradeDecrementation();
	std::string getName();
	void	setGrade(int grade);
	int 	getGrade();
	void signForm(AForm& AForm);
	Bureaucrat& operator=(const Bureaucrat &rhs);
	friend std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
};


#endif