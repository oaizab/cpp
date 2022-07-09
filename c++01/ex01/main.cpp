#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombie = new(std::nothrow) Zombie[N];
	if (zombie == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		zombie[i] = Zombie(name);
	}
	return (zombie);
}

int main(void)
{
	Zombie *zombie;
	zombie = zombieHorde(10, "Bob");
	for (int i = 0; i < 10; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}
