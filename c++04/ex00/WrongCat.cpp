#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat()" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src)
{
	std::cout << "WrongCat(const WrongCat &src)" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "~WrongCat()" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
