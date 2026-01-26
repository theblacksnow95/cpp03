#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Clappy"), _hitPoints(10), _attDamage(0), _egPoints(10)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _hitPoints(10), _attDamage(0), _egPoints(10)
{
	std::cout << "Contructor called." << std::endl;
	if(name.empty())
		_name = "Clappy";
	this->_name = name;
}

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
	if (this->getEnergy() <= 0 || this->getHits() <= 0)
	{
		std::cout << "No energy or hit points available, cannot attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << "attacks " << target << ", causing 1 points of damage!" << std::endl;
	this->_egPoints++;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << "points of damage!" << std::endl;
	this->_attDamage = this->getAttack() + amount;
	this->_hitPoints = this->getHits() - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << "hit points" << std::endl;

}
