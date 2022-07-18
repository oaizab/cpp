#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	std::cout << "Cat()" << std::endl;
}

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "Cat(const Cat &src)" << std::endl;
}

Cat::~Cat()
{
	std::cout << "~Cat()" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
