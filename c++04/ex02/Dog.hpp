#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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