#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		virtual Animal &operator=(const Animal &src);

		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif