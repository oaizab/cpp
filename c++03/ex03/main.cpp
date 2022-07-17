#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond1("diamond1");

	std::cout << std::endl;
	diamond1.takeDamage(100);
	diamond1.beRepaired(10);
	diamond1.attack("diamond2");
	std::cout << std::endl;


	std::cout << std::endl;
	DiamondTrap diamond2("diamond2");
	diamond2.attack("diamond1");
	std::cout << "I'm " << std::endl;
	diamond2.whoAmI();
	std::cout << std::endl;
	diamond2.guardGate();
	std::cout << std::endl;
	diamond2.highFivesGuys();
	std::cout << std::endl;

	return (0);
}