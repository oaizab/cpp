#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Animal")
{
	std::cout << "Animal()" << std::endl;
}

Animal::Animal(const Animal &src): type(src.type)
{
	std::cout << "Animal(const Animal &src)" << std::endl;
}

Animal::~Animal()
{
	std::cout << "~Animal()" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal::makeSound()" << std::endl;
}
