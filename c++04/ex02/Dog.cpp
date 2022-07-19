#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	type = "Dog";
	std::cout << "Dog()" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &src): AAnimal(src)
{
	std::cout << "Dog(const Dog &src)" << std::endl;
	this->brain = NULL;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "~Dog()" << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &src)
{
	delete this->brain;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
