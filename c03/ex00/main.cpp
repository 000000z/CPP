#include "ClapTrap.hpp"

int	main()
{
	ClapTrap david("david"), goliath("goliath");
	david.attack(goliath.getName());
	goliath.takeDamage(9);
	goliath.beRepaired(9);
	david.attack(goliath.getName());
	goliath.takeDamage(10);
}