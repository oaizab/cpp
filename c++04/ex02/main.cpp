#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();

	delete j;
	delete i;

	return 0;
}
