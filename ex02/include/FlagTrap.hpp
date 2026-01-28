#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define GRN	"\033[0;32m"
# define YLL	"\033[0;33m"
# define RED	"\033[0;31m"
# define RST	"\033[0m"



class FlagTrap: public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(const std::string& name);
		FlagTrap(const FlagTrap& other);
		FlagTrap& operator=(const FlagTrap& other);
		~FlagTrap();
		const std::string& getName();
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
};

#endif
