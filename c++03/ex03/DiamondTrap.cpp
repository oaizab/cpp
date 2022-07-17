#include "DiamondTrap.hpp"
#include <string.h>

DiamondTrap::DiamondTrap(void): ClapTrap(), \
	ScavTrap(), FragTrap()
{
	_name = "DiamondTrap";
	ClapTrap::_name = "DiamondTrap_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), \
	ScavTrap(name), FragTrap(name)
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

std::string DiamondTrap::getName(void) const
{
	return (_name);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << _name << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}
