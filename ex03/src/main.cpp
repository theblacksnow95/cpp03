#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap dia("Jhonny");
		DiamondTrap trpb("Helio");
		dia.test();
		dia.whoAmI();
		dia.guardGate();
		dia.highFivesGuys();
		dia.attack(trpb.getName());
	}
}
