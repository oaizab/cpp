#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	std::cout << "Cat()" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "Cat(const Cat &src)" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "~Cat()" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &src)
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
