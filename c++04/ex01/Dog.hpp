#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		virtual ~Dog();
		virtual Dog &operator=(const Dog &src);

		virtual void makeSound() const;

	private:
		Brain *brain;
};

#endif