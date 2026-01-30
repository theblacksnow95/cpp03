#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap dia("Jhonny");
		ClapTrap trpb("Helio");
		dia.whoAmI();
		dia.guardGate();
		dia.highFivesGuys();
		dia.attack(trpb.getName());
	}
}
