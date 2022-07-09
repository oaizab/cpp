#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

int main(void)
{
	Zombie *zombie = newZombie("Bob");
	zombie->announce();
	randomChump("Alice");
	delete zombie;
	return (0);
}
