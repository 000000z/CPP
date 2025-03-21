#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (this->HitPoint == 0)
	{
		std::cout << this->name << " is dead already." << std::endl;
		return ;
	}
	if (this->EnergyPoint == 0)
	{
		std::cout << this->name << " has no energy left he cannot do anything." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage" << std::endl;
	this->HitPoint -= this->AttackDamage;
	this->EnergyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint == 0)
	{
		std::cout << this->name << " is dead already." << std::endl;
		return ;
	}
	if (this->EnergyPoint == 0)
	{
		std::cout << this->name << " has no energy left he cannot do anything." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " points of damage" << std::endl;
	this->HitPoint -= amount;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoint == 0)
	{
		std::cout << this->name << " is dead." << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " healed " << amount << " Hitpoint" << std::endl;

	if (this->EnergyPoint == 0)
	{
		std::cout << this->name << " has no energy left he cannot heal." << std::endl;
		return ;
	}

	this->HitPoint += amount;
	this->EnergyPoint -= 1;
}

std::string ClapTrap::getName(void)
{
	return(name);
}