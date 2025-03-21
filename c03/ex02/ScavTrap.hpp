#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap() : ClapTrap()
	{
		std::cout << "ScavTrap constructor has been called" << std::endl;
		this->name = "unknown";
		this->HitPoint = 100;
		this->EnergyPoint = 50;
		this->AttackDamage = 20;
	}

	ScavTrap(std::string name) : ClapTrap(name)
	{
		std::cout << "ScavTrap named constructor has been called" << std::endl;
		this->name = name;
		this->HitPoint = 100;
		this->EnergyPoint = 50;
		this->AttackDamage = 20;
	}

	~ScavTrap()
	{
	std::cout << "ScavTrap destructor has been called" << std::endl;
	}

	void attack(const std::string& target)
	{
		if (this->HitPoint == 0)
		{
			std::cout << "ScavTrap" << this->name << " is dead already." << std::endl;
			return ;
		}
		if (this->EnergyPoint == 0)
		{
			std::cout <<  "ScavTrap" << this->name << " has no energy left he cannot do anything." << std::endl;
			return ;
		}
		std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage" << std::endl;
		this->HitPoint -= this->AttackDamage;
		this->EnergyPoint -= 1;
	}
	void guardGate();
};

#endif