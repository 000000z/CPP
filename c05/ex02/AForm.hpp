#ifndef AFORM_HPP
#define AFORM_HPP

class Bureaucrat;
#include <iostream>
#include "Bureaucrat.hpp"

class AFormGradeTooHighException : public std::exception 
{
public:
	const char* what() const throw() {
		return "Grade is too to sign";
	}
};	

class AFormGradeTooLowException : public std::exception
{
public:
	const char* what() const throw() {
		return "Grade is too to sign";
	}
};


class AForm
{
private:
	const std::string name;
	bool Sign;
	const int sign_grade;
	const int exc_grade;
public:
	AForm();
	AForm(const std::string _name, const int _sign_grade, const int _exc_grade);
	virtual ~AForm()
	{
		std::cout << getName() << " Destructor has been called" << std::endl;
	}
	int getGrade() const;
	int getExcGrade() const ;
	friend std::ostream& operator<<(std::ostream& out, const AForm& AForm);
	virtual void beSigned(Bureaucrat& bureaucrat) = 0;
	bool getSign() const;
	std::string getName() const;

};


#endif