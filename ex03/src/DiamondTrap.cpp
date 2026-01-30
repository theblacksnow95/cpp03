#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap::ClapTrap("Putaso_clap_name"), FragTrap("Putaso_clap_name"), ScavTrap("Putaso_clap_name"), _name("Putaso")
{
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name):ClapTrap::ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_egPoints = ScavTrap::_egPoints;
	_attDamage = FragTrap::_attDamage;
	std::cout << "DiamondTrap constructor called " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_egPoints = other._egPoints;
	_attDamage = other._attDamage;
	std::cout << "Copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_egPoints = other._egPoints;
		_attDamage = other._attDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name " << _name  << " -- Clap name " << ClapTrap::_name << std::endl;
}
