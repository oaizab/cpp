#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &src);

		std::string getType() const;
		void makeSound() const;

	protected:
		std::string type;
};

#endif