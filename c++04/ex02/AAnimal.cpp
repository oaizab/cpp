#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << "AAnimal()" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src): type(src.type)
{
	std::cout << "AAnimal(const AAnimal &src)" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "~AAnimal()" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	this->type = src.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}
