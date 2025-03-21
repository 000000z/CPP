#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string name;
	int exc_grade;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
	std::string getName();
	int getExcGrade();
};


#endif