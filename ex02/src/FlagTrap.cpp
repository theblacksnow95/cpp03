#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	_name = "Flaggy";
	_hitPoints = 100;
	_egPoints = 100;
	_attDamage = 30;
	std::cout << _name << ": Flagtrap default constructor called." << std::endl;
}
FlagTrap::FlagTrap(const std::string& name)
{
	if (name.empty())
		this->_name = "Flaggy";
	this->_name = name;
	this->_hitPoints = 100;
	this->_egPoints = 100;
	this->_attDamage = 30;
	std::cout << "Flagtrap constructor called" << std::endl;
}

// Copy operator
FlagTrap::FlagTrap(const FlagTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_egPoints = other._egPoints;
	this->_attDamage = other._attDamage;
}

// copy assignment operator overload
FlagTrap& FlagTrap::operator=(const FlagTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_egPoints = other._egPoints;
		this->_attDamage = other._attDamage;
	}
	return (*this);
}

FlagTrap::~FlagTrap()
{
	std::cout << "Flagtrap Destructor called." << std::endl;
}


void	highFivesGuys(void)
{
	
}
