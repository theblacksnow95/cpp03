#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap dia("Jhonny");
		DiamondTrap trpb("Helio");
		// dia.test();
		// dia.attack("Paco");
		dia.whoAmI();
		dia.guardGate();
		dia.highFivesGuys();
		dia.attack(trpb.getName());
		std::cout << dia.getHits()<< std::endl;;
	}

}
