#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "Scavvy";
	_hitPoints = 100;
	_egPoints = 50;
	_attDamage = 20;
	std::cout << "ScavTrap Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	if (name.empty())
		this->_name = "Scavvy";
	this->_name = name;
	this->_hitPoints = 100;
	this->_egPoints = 50;
	this->_attDamage = 20;
	std::cout << _name << ": ScavTrap constructor called." << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_egPoints = other._egPoints;
	this->_attDamage = other._attDamage;

}

// Copy assignment operator overload
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_egPoints <= 0 )
		std::cout << _name << ": No energy available, cannot attack" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << _name << ": No hit points available, cannot attack" << std::endl;
	else
	{
		std::cout << "Scavtrap " << this->getName() << " attacks " << target << ", causing 1 points of damage!" << std::endl;
		this->_egPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->_name << " has changed to Gate keeper mode." << std::endl;
}


void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
		this->_attDamage = this->_attDamage + amount;
		this->_hitPoints = this->_hitPoints - amount;
	}
	else
		std::cout << "Hey!, its already dead, you are a monster F*** YOU." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_egPoints <= 0)
		std::cout << "No energy left, cannot repair itself." << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "No hit points left, cannot repair itself." << std::endl;
	if (this->_hitPoints == 100)
	{
		std::cout << "Cannot heal more points, hit points at max (100)." << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " has repaired " << amount << " hit points" << std::endl;
		this->_hitPoints = this->_hitPoints + amount;
		this->_egPoints--;
	}
}
