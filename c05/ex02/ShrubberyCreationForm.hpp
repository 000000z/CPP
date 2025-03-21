#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string name;
	int exc_grade;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
	std::string getName();
	int getExcGrade();
};


#endif