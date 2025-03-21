#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl()
	{
		std::cout << "Constructor" << std::endl;
	}
	~Harl()
	{
		std::cout << "Destructor" << std::endl;
	}
	void complain(std::string level);
};

#endif