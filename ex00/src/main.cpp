#include "ClapTrap.hpp"


int	main()
{
	ClapTrap	clp;
	ClapTrap	other("paco");
	
	std::cout << clp.getName() << " Created" << std::endl;
	clp.attack("Paco");
	other.attack("Clappy");
	clp.takeDamage(5);
	other.takeDamage(5);
	clp.attack("Paco");
	clp.beRepaired(10);
	std::cout << clp.getHits() << " hitpoints left" << std::endl;
}
