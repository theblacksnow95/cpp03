#include "ClapTrap.hpp"

//default constructor
ClapTrap::ClapTrap(): _name("Clappy"), _hitPoints(10), _egPoints(10), _attDamage(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _hitPoints(10), _egPoints(10),_attDamage(0) 
{
	std::cout << "Contructor called." << std::endl;
	if(name.empty())
		_name = "Clappy";
	this->_name = name;
}

//copy contructor
ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name), _hitPoints(other._hitPoints), _egPoints(other._egPoints), _attDamage(other._attDamage)
{
	std::cout << "Copy constructor called." << std::endl;
}

const std::string& ClapTrap::getName()
{
	return (this->_name);
}

const int&	ClapTrap::getHits()
{
	return (this->_hitPoints);
}

const int& ClapTrap::getEnergy()
{
	return (this->_egPoints);
}

const int& ClapTrap::getAttack()
{
	return (this->_attDamage);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_egPoints <= 0 )
		std::cout << _name << ": No energy available, cannot attack" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << _name << ": No hit points available, cannot attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing 1 points of damage!" << std::endl;
		this->_egPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
	this->_attDamage = this->_attDamage + amount;
	if (_hitPoints > 0)
		this->_hitPoints = this->_hitPoints - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_egPoints <= 0)
		std::cout << "No energy left, cannot repair itself." << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "No hit points left, cannot repair itself." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << " hit points" << std::endl;
		this->_hitPoints = this->_hitPoints + amount;
	}
}
