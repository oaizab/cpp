#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	public:
		virtual ~AAnimal();
		virtual AAnimal &operator=(const AAnimal &src);

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		AAnimal();
		AAnimal(const AAnimal &src);

	protected:
		std::string type;
};

#endif