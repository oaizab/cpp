#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): name(name)
{}

HumanB::~HumanB()
{}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
