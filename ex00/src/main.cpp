#include "ClapTrap.hpp"


int	main()
{
	ClapTrap	obj;
	ClapTrap	other("paco");
	
	std::cout << obj.getName() << " Created" << std::endl;
	obj.attack("Paco");
	other.attack("Clappy");
	obj.takeDamage(10);
	other.takeDamage(10);
	obj.attack("Paco");
	obj.beRepaired(10);
}
