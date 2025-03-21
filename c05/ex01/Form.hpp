#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include <iostream>
#include "bureaucrat.hpp"

class FormGradeTooHighException : public std::exception 
{
public:
	const char* what() const throw() {
		return "Grade is too to sign";
	}
};

class FormGradeTooLowException : public std::exception
{
public:
	const char* what() const throw() {
		return "Grade is too to sign";
	}
};


class Form
{
private:
	const std::string name;
	bool Sign;
	const int sign_grade;
	const int exc_grade;
public:
	Form();
	Form(const std::string _name, const int _sign_grade, const int _exc_grade);
	~Form()
	{
		std::cout << getName() << " Destructor has been called" << std::endl;
	}
	int getGrade() const;
	int getExcGrade() const ;
	friend std::ostream& operator<<(std::ostream& out, const Form& Form);
	void beSigned(Bureaucrat& bureaucrat);
	bool getSign() const;
	std::string getName() const;

};


#endif