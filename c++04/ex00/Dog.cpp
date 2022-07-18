#include "Dog.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	std::cout << "Dog()" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
	std::cout << "Dog(const Dog &src)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "~Dog()" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
