#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag1("frag1");

	frag1.takeDamage(100);
	frag1.beRepaired(10);
	frag1.attack("frag2");

	FragTrap frag2("frag2");
	frag2.attack("frag1");
	frag2.takeDamage(50);
	frag2.beRepaired(100);
	frag2.attack("frag1");
	frag2.takeDamage(100);
	frag2.highFivesGuys();

	return (0);
}