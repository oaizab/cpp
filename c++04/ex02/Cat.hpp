#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &src);
		virtual ~Cat();
		virtual Cat &operator=(const Cat &src);

		virtual void makeSound() const;

	private:
		Brain *brain;
};

#endif