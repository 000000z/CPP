#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Laura;
	FragTrap Theresa("Theresa");
	ScavTrap Jhon("jhon");
	ClapTrap Denis ("Denis");
	Laura.attack("Theresa");
	Theresa.takeDamage(10);
	Theresa.beRepaired(10);
	Theresa.highFivesGuys();
	Denis.attack("Theresa");
	Jhon.guardGate();

	return (0);
}