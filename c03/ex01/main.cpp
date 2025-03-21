#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap Laura;
	ScavTrap Theresa("Theresa");
	ClapTrap Alex ("Alex");
	Alex.attack("Theresa");
	Theresa.takeDamage(10);
	Theresa.beRepaired(10);
	Theresa.guardGate();
	Theresa.attack("Alex");
	return (0);
}