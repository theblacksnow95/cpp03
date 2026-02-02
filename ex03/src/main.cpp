#include "DiamondTrap.hpp"

int	main()
{
	{
		std::cout << YLL << "Test1 : " << RST << std::endl;
		DiamondTrap dia("Jhonny");
		ClapTrap trpb("Helio");
		dia.highFivesGuys();
		dia.attack(trpb.getName());
		dia.guardGate();
		trpb.takeDamage(20);
		trpb.beRepaired(10);
		dia.whoAmI();
	}
	{

		std::cout << std::endl << YLL << "Test2 : " << RST << std::endl;
		DiamondTrap trap("Manu");
		trap.attack("Zeus");
		trap.takeDamage(500);
		trap.beRepaired(100);
		trap.attack("Zeus");
		trap.attack("Other");
		trap.attack("Other");
		std::cout << trap.getHits() << " -- "<< trap.getEnergy() << std::endl;
	}
}
