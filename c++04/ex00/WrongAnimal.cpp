#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal()" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src): type(src.type)
{
	std::cout << "WrongAnimal(const WrongAnimal &src)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "~WrongAnimal()" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal::makeSound()" << std::endl;
}
