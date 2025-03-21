#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string name;
	int exc_grade;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
	std::string getName();
	int getExcGrade();
};

#endif