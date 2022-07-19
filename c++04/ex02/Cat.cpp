#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	type = "Cat";
	std::cout << "Cat()" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &src): AAnimal(src)
{
	std::cout << "Cat(const Cat &src)" << std::endl;
	this->brain = NULL;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "~Cat()" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &src)
{
	delete this->brain;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
