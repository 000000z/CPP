#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap() : ClapTrap()
	{
		std::cout << "FragTrap constructor has been called" << std::endl;
		this->name = "unknown";
		this->HitPoint = 100;
		this->EnergyPoint = 100;
		this->AttackDamage = 30;
	}

	FragTrap(std::string name) : ClapTrap(name)
	{
		std::cout << "FragTrap named constructor has been called" << std::endl;
		this->name = name;
		this->HitPoint = 100;
		this->EnergyPoint = 100;
		this->AttackDamage = 30;
	}

	~FragTrap()
	{
	std::cout << "FragTrap destructor has been called" << std::endl;
	}

	void attack(const std::string& target)
	{
		if (this->HitPoint == 0)
		{
			std::cout << "FragTrap" << this->name << " is dead already." << std::endl;
			return ;
		}
		if (this->EnergyPoint == 0)
		{
			std::cout <<  "FragTrap" << this->name << " has no energy left he cannot do anything." << std::endl;
			return ;
		}
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage" << std::endl;
		this->HitPoint -= this->AttackDamage;
		this->EnergyPoint -= 1;
	}
	void highFivesGuys(void);
};

#endif