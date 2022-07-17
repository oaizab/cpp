#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav1("scav1");

	scav1.takeDamage(100);
	scav1.beRepaired(10);
	scav1.attack("scav2");

	ScavTrap scav2("scav2");
	scav2.attack("scav1");
	scav2.takeDamage(50);
	scav2.beRepaired(100);
	scav2.attack("scav1");
	scav2.takeDamage(100);
	scav2.guardGate();

	return (0);
}