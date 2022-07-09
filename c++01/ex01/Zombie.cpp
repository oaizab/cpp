#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(): name("")
{}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	// std::cout << "Zombie " << this->name << " is dead!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}