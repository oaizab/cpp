#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1("clap1");

	clap1.takeDamage(10);
	clap1.beRepaired(10);
	clap1.attack("clap2");

	ClapTrap clap2("clap2");
	clap2.attack("clap1");
	clap2.takeDamage(5);
	clap2.beRepaired(10);
	clap2.attack("clap1");
	clap2.takeDamage(10);

	return (0);
}