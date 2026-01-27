#include "ClapTrap.hpp"


int	main()
{
	ClapTrap	obj;
	ClapTrap	other("paco");
	
	std::cout << obj.getName() << " Created" << std::endl;
	obj.attack("Paco");
	other.attack("Clappy");
	obj.takeDamage(5);
	other.takeDamage(5);
	obj.attack("Paco");
	obj.beRepaired(10);
	std::cout << obj.getHits() << " hitpoints left" << std::endl;
}
