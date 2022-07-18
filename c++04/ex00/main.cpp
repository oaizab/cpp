#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();
	std::cout << meta->getType() << " ";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << k->getType() << " ";
	k->makeSound();
	std::cout << l->getType() << " ";
	l->makeSound();

	return 0;
}
